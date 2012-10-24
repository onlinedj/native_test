/*=============================================================================
#     FileName: s7_3_var_list.c
#         Desc: var list usecase implementation
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-23 15:04:07
#      History:
=============================================================================*/
#include <stdio.h>
#include <stdarg.h>

static void myprintf(char *fmt, ...);

int main(int argc, const char *argv[])
{
    
    myprintf("test %s %d\n", "jacky", 1986);
    return 0;
}

static void myprintf(char *fmt, ...)
{
    va_list ap;
    char *format;
    format = fmt;
    va_start(ap, fmt);
    int i = 0;
    char tmp;
    for(;(tmp = *format)!='\0';format++) {
        if(tmp!='%') {
            putchar(tmp); 
            continue;
        } 
        /*
        format++;
        char test = *format;
        printf("%c",test);
        */
        switch(*++format) {
        case 'd':
            printf("%d",va_arg(ap,int));
            break;
        case 's':
            printf("%s",va_arg(ap,char*));
            break;
        default:
            printf("%s", "FORMAT_ERROR");
            break;
        
        }
    }
    va_end(ap);
    
}
