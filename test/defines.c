/*=============================================================================
#     FileName: defines.c
#         Desc: test what the no define value will do
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-20 11:02:54
#      History:
=============================================================================*/
#include <stdio.h>

#define TEST 1

int main(int argc, const char *argv[])
{
#ifdef TEST
    printf("%d\n",TEST);
#endif
    return 0;
}
