/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>
#include <string.h>

int get_factorial_sum(int n);

int main(int argc, const char *argv[])
{
    int n = atoi(argv[1]);
    printf("%d! sum : %d\n",n,get_factorial_sum(n));
    return 0;
}

int get_factorial_sum(int n)
{
    if(n == 0) {
        return 1;
    } else {
        int temp = get_factorial_sum(n-1);
        return n*temp;
    }
}
