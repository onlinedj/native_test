/*=============================================================================
#     FileName: x1_2_testprintarg.c
#         Desc: if the args didn't define, 
#               it will give a warning and ignore the "\" escape character.
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-08 11:37:48
#      History:
=============================================================================*/

#include <stdio.h>


int main(int argc, const char *argv[])
{
    printf("the \\c is \c\n");
    return 0;
}
