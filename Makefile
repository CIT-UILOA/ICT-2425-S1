CC=gcc
CFLAGS=-Wall -Werror -Iinclude
BUILD_DIR = build

.PHONY: all
all: dirs hello-world

.PHONY: dirs
dirs:
	mkdir build

.PHONY: clean
clean:
	rm -rf build

%: $(BUILD_DIR)/common.o $(BUILD_DIR)/%.o
	$(CC) $(CFLAGS) -o build/$@ $^

$(BUILD_DIR)/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@