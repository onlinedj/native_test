#include <stdio.h>

int main(int argc, const char *argv[])
{
    char **c = argv;
    printf("the c[0]=%s\n",*c);
    char a[12] = "123123123123";
    char *b;
    b = "456456456456";
    fprintf(stdout, "current str: %ld\n", sizeof(a));
    fprintf(stdout, "current str: %c\n", a[10]);
    fprintf(stdout, "current str: %s\n", b);
    fprintf(stdout, "current params count: %d\n", argc);
    fprintf(stdout, "current params list: %s\n", argv[0]);
    int const* const x;
    int* const y;
    int const *z;
    const int * const r;

    return 0;
}
