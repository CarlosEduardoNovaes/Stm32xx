include ../definitions.mk
CC_OPTIONS += -I../include

TARGET  = minilib.o
SRCS    = minilib.cpp

all: $(TARGET)



$(TARGET):	$(SRCS)
	$(CC) $(CC_OPTIONS)  -c $^ -o $@

clean:
	rm -f *.o
