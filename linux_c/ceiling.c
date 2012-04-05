/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>

int main(void)
{
    int a = 19;
    int b = 4;

    printf("the ceiling of %d/%d=%d\n",a,b,(a+b-1)/b);

    if(a%b == 0) {
        printf("the ceiling of %d/%d=%d\n",a,b,a/b);
    } else {
        printf("the ceiling of %d/%d=%d\n",a,b,a/b+1);
    }
}
