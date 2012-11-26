#include <stdio.h>

int main(int argc, char** argv)
{
    struct my_type {
        char a[3];
        short b;
    } demo;

    printf("the size is %ld\n",sizeof(demo));
}
