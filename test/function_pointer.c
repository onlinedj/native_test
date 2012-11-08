/*=============================================================================
#     FileName: function_pointer.c
#         Desc: test the complicated function pointer here.
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-02 16:38:30
#      History:
=============================================================================*/

#include <stdio.h>
#include <string.h>

void (*func)(const char*);
static void printA(const char *str)
{
    printf("ATEST:%s\n",str);
}
static void printB(const char *str)
{
    printf("Jacky:%s\n",str);
}
int main(int argc, const char *argv[])
{
    if(argc<3) {
        printf("arguments < 2\n"); 
        return -1;
    }
    char c = 'A';
    if(0==strncmp(argv[1],&c,1)){
        func = printA; 
    } else {
        func = printB; 
    }
    (*func)(argv[2]);
    return 0;
}
