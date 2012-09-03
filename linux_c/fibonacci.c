/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = atoi(argv[1]);
    printf("%d 's fibonacci=%d\n",a,get_fibo(a));
    return 0;
}

int get_fibo(int n)
{
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return get_fibo(n-1)+get_fibo(n-2);
    }
}
