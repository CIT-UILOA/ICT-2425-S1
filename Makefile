CC=gcc
CFLAGS=-Wall -Werror


.PHONY: all
all: dirs

.PHONY: dirs
dirs:
	mkdir build

%: build/%
	./build/$@

build/%: src/%.c
	$(CC) $(CFLAGS) -o $@ $<