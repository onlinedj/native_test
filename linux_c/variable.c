/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>

int a = 5;
void pri(void) 
{
    printf("time : %d\n",a);
}

int main(void)
{
    pri();
    int a = 15;
    printf("%d\n",a);
}
