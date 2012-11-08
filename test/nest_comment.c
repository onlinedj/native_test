/*=============================================================================
#     FileName: nest_comment.c
#         Desc: test the code with nested comment
#               if the compiler support it'll print 1, else it'll print 0;
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-03 15:48:45
#      History:
=============================================================================*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int c = /**/0*/**/1;
    int a = 1;
    int b = 2;
    printf("the c=%d\n",c);
    /*c = a+++++b;*/ //this is error for compiler eat 4 plus for a
    //c = a+++b; //this is correct for eat 3 plus is error, so it eat 2
    //c = a++++ +b;
    a++++;

    printf("and then the c=%d\n",c);
    return 0;
}
