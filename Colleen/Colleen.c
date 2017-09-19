#include <stdio.h>
/*
	mon main
*/
int blabla(void) { return (1); }
int main(void) {
	/*
		inside
	*/
	char *s="#include <stdio.h>%c/*%c%cmon main%c*/%cint blabla(void) { return (1); }%cint main(void) {%c%c/*%c%c%cinside%c%c*/%c%cchar *s=%c%s%c;%c%cblabla();%c%cprintf(s, 10, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 9); }";
	blabla();
	printf(s, 10, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 9); }