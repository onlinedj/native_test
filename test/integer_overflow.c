/*=============================================================================
#     FileName: integer_overflow.c
#         Desc: test the integer overflow
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-27 14:12:40
#      History:
=============================================================================*/

#include <stdio.h>
#include <limits.h>

extern void exit(int n);
#define PRINT(a) do { \
    printf(#a"=%ld\n",(unsigned long)(a));\
} while(0) 


int main(int argc, const char *argv[])
{
    /*unsigned short a,b,c;
    a = USHRT_MAX;
    b = USHRT_MAX;
    c = a + b;
    unsigned long d;
    d = a + b;
    PRINT(c);
    PRINT(d);*/
    signed short a;
    unsigned short b;
    unsigned short c;
    a = SHRT_MIN;
    b = 5;
    c = a + b;
    PRINT(c);
    exit(14);
}
