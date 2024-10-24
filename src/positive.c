#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main() {
	char raw[8];
	int num;

	input("Enter number", raw, 8);
	num = atoi(raw);

	if (num >= 0) {
		printf("Positive\n");
		return 0;
	}

	printf("Negative\n");
}
