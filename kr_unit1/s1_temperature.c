/**
 *
 * File: s1_temperature.c
 * Author: Jacky Yang
 * Date: 2011-12-20
 * Desc: temperature transfer from f to c
 *         c = (f-32)*5/9
 */
#include <stdio.h>

#define MAX_TEMP 300
#define MIN_TEMP 0
#define STEP 20


void show_temp_list();

int main(void)
{
    show_temp_list();
}

void show_temp_list()
{
    int i;
    for(i=MIN_TEMP;i<=MAX_TEMP;i+=STEP)
    {
        printf("%d    %-6.1f\n",i,(i-32)*5/9.0);
    }
}
