/*=============================================================================
#     FileName: byte_align3.c
#         Desc: test byte align,a complex one.
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-26 14:49:02
#      History:
=============================================================================*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    struct test {
        char a;
        int b[4];
        int *c;
        char d[3];
        double e;
    };
    long re = sizeof int;
    printf("%ld\n", re);
    return 0;
}
