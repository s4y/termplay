#include <stdio.h>

int main() {
	for (;;) {
		char c = getchar();
		switch(c) {
			case EOF: return 0;
			case '\n':
				printf("<LF>\n");
				break;
			case '\x1b':
				printf("<esc>\n");
				break;
			case '\x7f':
				printf("<backspace>\n");
				break;
			default:
				printf("%c\n", c);
		}
	}
	return 0;
}
