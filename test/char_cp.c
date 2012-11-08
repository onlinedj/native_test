/*=============================================================================
#     FileName: char_cp.c
#         Desc: char array copy
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-03 16:10:54
#      History:
=============================================================================*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char x[10];
    char y[] = "yes";
    char *xp = x;
    char *yp = y;
    while(*yp != '\0') {
        *xp++ = *yp++; 
    }
    *xp = *yp;
    printf("%s\n",x);
    return 0;
}
