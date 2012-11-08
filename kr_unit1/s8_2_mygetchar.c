/*=============================================================================
#     FileName: s8_2_mygetchar.c
#         Desc: a demo of getchar
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-24 16:38:16
#      History:
=============================================================================*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define methodC

static int mygetchar(void)
{
#ifdef methodA
    printf("methodA\n");
    char *p = (char*) malloc(sizeof(char));
    int count;
    count = read(0, p, 1);
    char c;
    c = *p;
    free(p);
    if(count>0) {
        return c;
    } else {
        return -1; 
    }
#elif defined(methodB)
    printf("methodB\n");
    char c;
    return read(0, &c, 1)==1 ? c : EOF;
#elif defined(methodC)
#define BUFF_SIZE 12
    static char buf[BUFF_SIZE];
    static char *bufp = buf;
    static int count = 0;
    static int n = 0;
    if(n == 0) {
        n = read(0, buf, BUFF_SIZE); 
        bufp = buf;
    }
    char c = (--n>=0) ? *bufp++ : EOF;
    count++;
    printf("buf count=%d bufp=%d ", count, *bufp);
    return c;
#else 
    printf("methodELSE\n");
    return EOF;
#endif
}

int main(int argc, const char *argv[])
{
    char c; 
    while((c = mygetchar()) != EOF) {
        putchar(c); 
    }
    return 0;
}
