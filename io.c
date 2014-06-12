#include <stdio.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	for (;;) {
		putchar(getchar());
	}

	return 0;
}
