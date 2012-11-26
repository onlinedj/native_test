#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    unsigned long i = 0,*p,*p1;
    p = (unsigned long *)malloc(10000);
    printf("%ld\n",sizeof(unsigned long));
    p1 = p;
/*    for(i = 0;i<998;i++,p1++) {*/
/*        *p1 = 0x100;*/
/*        printf("%ld\n",i);*/
/*    }*/
    free(p);
    printf("ok\n");
    return 0;
}
