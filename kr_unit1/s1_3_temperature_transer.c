/*=============================================================================
#     FileName: s1_3_temperature_transer.c
#         Desc: transfer 华氏 to 摄氏
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-08 11:46:15
#      History:
=============================================================================*/

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
        printf("%-3d    %-6.1f\n",i,(i-32)*5/9.0);
    }
}
