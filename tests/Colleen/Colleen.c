#include <stdio.h>

/* mon main */
int main(void)
{
	/* inside */
	char *s="#include <stdio.h>%c%c/* mon main */%cint main(void)%c{%c%c/* inside */%c%cchar *s=%c%s%c;%c%cprintf(s, 10, 10, 10, 10, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 10);%c}%c";
	printf(s, 10, 10, 10, 10, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 10);
}
