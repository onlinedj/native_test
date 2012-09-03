/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>

int main(int argc, const char *argv[])
{
    if(argc>1) {
        printf("can reach here");
        return 100;
    } else {
        printf("can reach here");
        return 200;
    }
    printf("cannot reach here");
    return 0;
}
