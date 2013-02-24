#include <stdio.h>

int main(int argc, const char *argv[])
{
    float a = 12.375f;
    printf("a=%f,ax=%#x\n", a, *((int *) &a));
    float b = 1.2345678f;
    printf("b=%f,bx=%#x\n", b, *((int *) &b));
    float c = 68.123f;
    printf("c=%f,cx=%#x\n", c, *((int *) &c));
    return 0;
}
