/*=============================================================================
#     FileName: const_char.c
#         Desc: test const related function
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-12-10 10:03:31
#      History:
=============================================================================*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    const char a = 'a';
    typedef const char *foo;
    typedef char *baz;
    foo foo2;
    baz baz2;
    return 0;
}
