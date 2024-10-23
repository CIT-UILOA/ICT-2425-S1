
.PHONY: all
all: dirs

.PHONY: dirs
dirs:
	mkdir build

%: build/%
	./build/$@

build/%: src/%.c
	gcc -o $@ $<