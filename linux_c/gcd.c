/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d,%d 's gcd=%d\n",a,b,get_gcd(a,b));
    return 0;
}

int get_gcd(int a, int b)
{
    if(a%b == 0) {
        return b;
    } else {
        return get_gcd(b,a%b);
    }
}
