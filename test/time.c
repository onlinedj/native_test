/*=============================================================================
#     FileName: time.c
#         Desc: test time related function
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-21 15:19:49
#      History:
=============================================================================*/

#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
int test1();
int test2();

int main(int argc, const char *argv[])
{
    test2();
}

int test2()
{
    time_t total = time(NULL);    
    printf("total=%ld",(unsigned long)total);
    printf("localtime=%s",ctime(&total));
    struct tm *tmp;
    tmp = gmtime(&total);
    printf("asctime=%s",asctime(tmp));
}

int test1()
{
    struct timeval val1;
    //struct timeval val2;
    gettimeofday(&val1, NULL);
    //gettimeofday(&val2, NULL);
    char *str_out;
    str_out = calloc(sizeof(char), 15);
    fprintf(stdout,"the time by second: %ld\n", val1.tv_sec);
    struct tm *tmp;
    tmp = localtime(&val1.tv_sec);
    fprintf(stdout,"the standard output: %d %d %d\n", tmp->tm_year, tmp->tm_mon, tmp->tm_mday);
    strftime(str_out, 50, "%Y%m%d%H%M%S", tmp);
    fprintf(stdout,"the local time: %s\n", str_out);
    return 0;
}
