/*=============================================================================
#     FileName: global_var.c
#         Desc: test global var and local var
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-12-01 12:31:35
#      History:
=============================================================================*/
#include <stdio.h>

extern int a = 5;

void test_global() {
    printf("test_a = %d\n", a);
}
