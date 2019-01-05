# Makefile for app.elf

include definitions.mk

# SUBDIRS
SUBDIRS = startup testapp

SUBDIRFILES = $(foreach dir,$(SUBDIRS),$(wildcard $(dir)/$(dir).o))


# Build SUBDIRS
.PHONY: clean subdirs $(SUBDIRS)

all: app.elf

echotest:
	@echo $(SUBDIRFILES)

subdirs: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@



app.dump.asm:	app.elf
	$(DUMP) $< >$@

app.bin:	app.elf
	$(OBJCOPY) $< $@ -O binary

app.elf: 	$(SUBDIRS)
	$(LD)  -T  $(LINKER_FILE) -o $@   $(SUBDIRFILES) 


flash:	app.elf
	$(OPENOCD) $(OCDCFG) -c "program app.elf verify reset exit"

gdb:
	$(GDB) --eval-command="target remote localhost:3333" testapp.elf

gdbtui:
	$(GDB) -tui --eval-command="target remote localhost:3333" testapp.elf

clean:
	rm -f *.o *.elf *.dump.asm *.bin
	for dir in $(SUBDIRS); do \
	$(MAKE) -C $$dir clean; \
	done


