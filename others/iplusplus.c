#include <stdio.h>

static int a = 4;

int main(int argc, const char *argv[])
{
    a += a++;
    printf("the subfix result %d\n",a);
    a = 4;
    a += ++a;
    printf("the prefix result %d\n",a);
    return 0;
}
