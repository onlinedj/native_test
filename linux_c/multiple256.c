/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i = 0;
    for(;i<=1024;++i) {
        if(i % 0x100 == 0) {
            printf("%d is 256x \n",i);
        }
    }
    return 0;
}
