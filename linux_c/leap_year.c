/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>
#include <string.h>

int is_leap_year(int year);

int main(int argc, const char *argv[])
{
    int year = atoi(argv[1]);
    if(is_leap_year(year)) {
        printf("%d is leap year\n",year);
    } else {
        printf("%d is not leap year\n",year);
    }
    return 0;
}
#define TRUE 1
#define FALSE 0
int is_leap_year(int year)
{
    if(year%4 == 0 && !year%100 == 0) {
        return TRUE;
    } else if(year%400 == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}
