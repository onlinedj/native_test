/*=============================================================================
#     FileName: array2.c
#         Desc: 
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-26 17:07:06
#      History:
=============================================================================*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    char *name = "emily";
    char i[] = "abcdef";
    /*name = i;*/
    /**name = 'i';*/
    /*printf("%s\n",name);*/
    char (*p)[7] ;
    p = &i;
    int a = p;
    p++;
    int b = p;
    printf("%d\n",(a-b));
    return 0;
}
