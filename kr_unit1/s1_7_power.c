/*=============================================================================
#     FileName: s1_7_power.c
#         Desc: calculate num's power
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-10 14:53:32
#      History:
=============================================================================*/
#include <stdio.h>

static signed int power(signed int base, signed int n) {
    if(n==0) {
        return 1;
    } else if(n<0) {
        return -1;
    } else {
        while(n>0) {
            base *= base;
            n--;
        } 
        return base;
    }

}

int main(int argc, const char *argv[])
{
    
    return 0;
}
