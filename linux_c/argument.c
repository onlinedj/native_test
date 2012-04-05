/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>

void exchange(int* a, int* b);

int main(void)
{
    int a = 19;
    int b = 4;
    exchange(&a,&b);
    printf("a=%d,b=%d\n",a,b);
}

void exchange(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
