#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 101;
    int *const s;
    s = &a;
    int b = 202;
    s = &b;
    return 0;
}
