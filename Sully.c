#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define FLAGS O_WRONLY | O_CREAT | O_TRUNC
#define NAME "Sully_%i.c"
#define COMPILE "clang -Wall -Wextra -Werror Sully_%i.c -o Sully"
#define SOURCE "%cinclude <stdio.h>%c%cinclude <stdlib.h>%c%cinclude <fcntl.h>%c%cdefine FLAGS O_WRONLY | O_CREAT | O_TRUNC%c%cdefine NAME %cSully_%ci.c%c%c%cdefine COMPILE %cclang -Wall -Wextra -Werror Sully_%ci.c -o Sully%c%c%cdefine SOURCE %c%s%c%cint main() { int i = %i; if (i < 0) { return 0; } char *f; char *str; asprintf(&f, NAME, i); int fd = open(f, FLAGS, 0600); char *s = SOURCE;%cdprintf(fd, s, 35, 10, 35, 10, 35, 10, 35, 10, 35, 34, 37, 34, 10, 35, 34, 37, 34, 10, 35, 34, s, 34, 10, (i-1), 10, 34, 34); asprintf(&str, COMPILE, i); system(str); system(%c./Sully%c); }"
int main() { int i = 15; if (i < 0) { return 0; } char *f; char *str; asprintf(&f, NAME, i); int fd = open(f, FLAGS, 0600); char *s = SOURCE;
dprintf(fd, s, 35, 10, 35, 10, 35, 10, 35, 10, 35, 34, 37, 34, 10, 35, 34, 37, 34, 10, 35, 34, s, 34, 10, (i-1), 10, 34, 34); asprintf(&str, COMPILE, i); system(str); system("./Sully"); }