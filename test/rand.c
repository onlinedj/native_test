/*=============================================================================
#     FileName: rand.c
#         Desc: test the time() and rand() srand() function
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-18 11:22:59
#      History:
=============================================================================*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    srand(time(0));//before you invoke rand , you should set this for random init.
    printf("%d is the random num.\n", rand());
    return 0;
}
