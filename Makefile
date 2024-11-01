CC=gcc
CFLAGS=-Wall -Werror -Iinclude
BUILD_DIR = build

.PHONY: all
all: clean $(BUILD_DIR)/hello-world $(BUILD_DIR)/bonussy $(BUILD_DIR)/temp-converter $(BUILD_DIR)/bmi

.PHONY: clean
clean:
	@rm -vrf build/*

$(BUILD_DIR)/%: $(BUILD_DIR)/%.o $(BUILD_DIR)/libcommon.so
	$(CC) $(CFLAGS) -Wl,-rpath=. -Lbuild -lcommon -o $@ $<

$(BUILD_DIR)/lib%.so: src/%.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $< -lc

$(BUILD_DIR)/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@
