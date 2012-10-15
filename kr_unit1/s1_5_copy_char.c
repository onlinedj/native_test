/*=============================================================================
#     FileName: s1_5_copy_char.c
#         Desc: copy char from the terminal (tips: Enter will mock input the string,Ctrl+d will mock the EOF)
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-08 11:51:14
#      History:
=============================================================================*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    char c;
    printf("start getchar\n");
    while((c = getchar()) != EOF) {
        printf("do put char\n");
        putchar(c); 
        putchar('\n');
    }
    printf("end of file!!!");
    return 0;
}

