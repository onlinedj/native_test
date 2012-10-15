#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    struct timeval val1;
    //struct timeval val2;
    gettimeofday(&val1, NULL);
    //gettimeofday(&val2, NULL);
    char *str_out;
    str_out = calloc(sizeof(char), 15);
    fprintf(stdout,"the time by second: %ld\n", val1.tv_sec);
    struct tm* tm;
    tm = localtime(&val1.tv_sec);
    fprintf(stdout,"the standard output: %d %d %d\n", tm->tm_year, tm->tm_mon, tm->tm_mday);
    strftime(str_out, 50, "%Y%m%d%H%M%S", tm);
    fprintf(stdout,"the local time: %s\n", str_out);
    return 0;
}
