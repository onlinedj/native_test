#include <stdio.h>

int main(void)
{
    char* d1;
    long* d2;
#pragma pack(push)
#pragma pack(4)
    struct myt{
        int b[5];
        int* a;
    } test;
#pragma pack(pop)
    printf("struct size is %ld\n",sizeof(test));
    printf("short size is %ld\n",sizeof(d1));
    printf("long size is %ld\n",sizeof(d2));
}
