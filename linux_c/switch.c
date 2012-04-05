/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    const char a = *argv[1];
    switch(a) {
    case 'a':
        printf("the a=%d\n",atoi(argv[2])%10);
        break;
    case 'b':
        printf("the b=%d\n",atoi(argv[2])/10%10);
        break;
    }
}
