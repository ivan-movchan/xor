CC=gcc
CCFLAGS=-O2

SOURCE=xor.c
TARGET=xor

PREFIX=/usr

all:
	$(CC) $(CCFLAGS) -o $(TARGET) $(SOURCE)

install: all
	cp $(TARGET) $(PREFIX)/local/bin/$(TARGET)
	chmod +x $(PREFIX)/local/bin/$(TARGET)

uninstall: install
	rm -f $(PREFIX)/local/bin/$(TARGET)
