#include <stddef.h>
#include <stdio.h>

struct Ruim { char a; int b; char c; };
struct Bom { int b; char a; char c; };

int main(){
    struct Bom n;
    struct Ruim m;
    printf("%zu\n", sizeof(n));
    printf("%zu\n", sizeof(m));

    printf("Ruim\n");
    printf("%zu\n",offsetof(struct Ruim, a));
    printf("%zu\n",offsetof(struct Ruim, b));
    printf("%zu\n",offsetof(struct Ruim, c));

    printf("Bom\n");
    printf("%zu\n",offsetof(struct Bom, a));
    printf("%zu\n",offsetof(struct Bom, b));
    printf("%zu\n",offsetof(struct Bom, c));
    return 0;

}
