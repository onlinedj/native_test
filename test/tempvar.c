/*=============================================================================
#     FileName: tempvar.c
#         Desc: if tmp var is not assigned a given value , it will get dirty value itsself.
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-24 13:40:11
#      History:
=============================================================================*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b,c = a + b;
    printf("before:a=%d,b=%d,c=%d\n",a,b,c);
    scanf("%d %d",&a,&b);
    printf("after:a=%d,b=%d,c=%d\n",a,b,c);

    return 0;
}

