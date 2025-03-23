CC=gcc
CCFLAGS=-O2

SOURCE=xor.c
TARGET=xor

PREFIX=/usr

all: xor

xor: $(SOURCE)
	$(CC) $(CCFLAGS) -o $(TARGET) $(SOURCE)

install: xor
	cp $(TARGET) $(PREFIX)/local/bin/$(TARGET)
	chmod +x $(PREFIX)/local/bin/$(TARGET)

uninstall: install
	rm -f $(PREFIX)/local/bin/$(TARGET)
