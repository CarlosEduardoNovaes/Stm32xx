include ../definitions.mk
CC_OPTIONS += -I../include

TARGET = startup.o
SRCS = stm32f103_startup.cpp

all: $(TARGET)



$(TARGET):	$(SRCS)
	$(CC) $(CC_OPTIONS) -c $^ -o $@

clean:
	rm -f *.o
