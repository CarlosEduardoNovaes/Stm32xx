include ../definitions.mk
CC_OPTIONS += -I../include

TARGET = testapp.o
SRCS = main.cpp

all: $(TARGET)



$(TARGET):	$(SRCS)
	$(CC) $(CC_OPTIONS) -c $^ -o $@

clean:
	rm -f *.o
