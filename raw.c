#include <stdlib.h>
#include <stdio.h>
#include <termios.h>

int main() {

	struct termios tios = {};
	if (tcgetattr(0, &tios) < 0) { abort(); }
	tios.c_lflag &= ~ICANON;
	tios.c_lflag &= ~ECHO;
	tios.c_lflag &= ~ECHOCTL;
	if (tcsetattr(0, TCSANOW, &tios) < 0) { abort(); }

	return 0;
}
