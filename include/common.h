#include <stdlib.h>
#pragma once

/*
Fetches user input with `prompt` from stdin and returns it to `output` without the newline.
This function appends a `:` to `prompt` before printing
*/
int input(char *prompt, char *output, size_t output_size);
