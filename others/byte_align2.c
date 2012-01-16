#include <stdio.h>

int main(void)
{
    char* d1;
    long* d2;
    struct myt{
        int b;
        int* a;
    } test;
    printf("struct size is %d\n",sizeof(test));
    printf("short size is %d\n",sizeof(d1));
    printf("long size is %d\n",sizeof(d2));
}
