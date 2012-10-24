/*=============================================================================
#     FileName: s1_7_power.c
#         Desc: calculate num's power
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-10 14:53:32
#      History:
=============================================================================*/
#include <stdio.h>
#include <stdlib.h>

static void usage(const char *argv0)
{
    fprintf(stderr, "Usage: %s base n\n" , argv0);
    exit(-1);
}

static signed int power(signed int base, signed int n) {
    if(n==0) {
        return 1;
    } else if(n<0) {
        return -1;
    } else {
        while(n-1>0) {
            base *= base;
            n--;
        } 
        return base;
    }

}

int main(int argc, const char *argv[])
{
    
    if(argc < 3) {
        usage(argv[0]); 
    }
    int base = atoi(argv[1]);
    int n = atoi(argv[2]);
    printf("base=%d,n=%d\n",base,n);
    printf("result=%d\n",power(base,n));

    return 0;
}
