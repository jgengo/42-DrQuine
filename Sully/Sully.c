#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define FLAGS O_WRONLY | O_CREAT | O_TRUNC
#define NAME "Sully_%i.c"
#define COMPILE "clang -Wall -Wextra -Werror Sully_%i.c -o Sully_%i"
#define SOURCE "#include <unistd.h>%c#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#define FLAGS O_WRONLY | O_CREAT | O_TRUNC%c#define NAME %cSully_%ci.c%c%c#define COMPILE %cclang -Wall -Wextra -Werror Sully_%ci.c -o Sully_%ci%c%c#define SOURCE %c%s%c%cint main() { int fd;%cint i = %i;%cchar *f, *str, *name; if (i <= 0) { exit(1); } asprintf(&f, NAME, i); while (access(f, F_OK)!=-1 && i--) { if (i < 0) { exit(1); } asprintf(&f, NAME, i); } if ((fd = open(f, FLAGS, 0600)) == -1) { exit(1); } char *s = SOURCE;%cdprintf(fd, s, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 37, 37, 34, 10, 34, s, 34, 10, 10, (i == -1) ? 0 : i, 10, 10, 34, 37, 34); asprintf(&str, COMPILE, i, i); asprintf(&name, %c./Sully_%ci%c, i); system(str); system(name); }"
int main() { int fd;
int i = 5;
char *f, *str, *name; if (i <= 0) { exit(1); } asprintf(&f, NAME, i); while (access(f, F_OK)!=-1 && i--) { if (i < 0) { exit(1); } asprintf(&f, NAME, i); } if ((fd = open(f, FLAGS, 0600)) == -1) { exit(1); } char *s = SOURCE;
dprintf(fd, s, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 37, 37, 34, 10, 34, s, 34, 10, 10, (i == -1) ? 0 : i, 10, 10, 34, 37, 34); asprintf(&str, COMPILE, i, i); asprintf(&name, "./Sully_%i", i); system(str); system(name); }