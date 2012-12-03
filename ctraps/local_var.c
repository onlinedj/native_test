/*=============================================================================
#     FileName: local_var.c
#         Desc: test static var and local var and global var
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-12-01 12:27:40
#      History:
=============================================================================*/

#include <stdio.h>
static int a = 10;
extern int a;
int main(int argc, const char *argv[])
{

    a = 100;
    printf("a = %d\n",a);
    test_global();
    test_static();
    return 0;
}

int test_static() {
    printf("static %d\n",a);
}
