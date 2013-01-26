TARGET=interface
CFLAGS=-O2 -g
LDFLAGS=-lreadline

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) interface.c -o $(TARGET) $(LDFLAGS)

clean:
	rm -rf $(TARGET)
