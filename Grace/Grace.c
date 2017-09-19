#include <stdio.h>
#include <fcntl.h>
/*
	nul
*/
#define B b
#define A a
#define FT() int main() { int f = open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, 0600); char *s="%cinclude <stdio.h>%c%cinclude <fcntl.h>%c/*%c%cnul%c*/%c%cdefine B b%c%cdefine A a%c%cdefine FT() int main() { int f = open(%cGrace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC, 0600); char *s=%c%s%c; dprintf(f, s, 35, 10, 35, 10, 10, 9, 10, 10, 35, 10, 35, 10, 35, 34, 34, 34, s, 34, 10); };%cFT();"; dprintf(f, s, 35, 10, 35, 10, 10, 9, 10, 10, 35, 10, 35, 10, 35, 34, 34, 34, s, 34, 10); };
FT();