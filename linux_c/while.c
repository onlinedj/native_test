/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>

int get_factorial_sum(int n);
int main(int argc, const char *argv[])
{
    int a = 5;
    printf("%d\n",get_factorial_sum(a));
    return 0;
}

int get_factorial_sum(int n) 
{
    int sum = 1;
    while(n>1) {
        sum = sum*n;                
        n--;
    }
    return sum;
}
