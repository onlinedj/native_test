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
   if(!strcmp(argv[1],"a")) {
        printf("the a=%d\n",atoi(argv[2])%10);
   } else if(!strcmp(argv[1],"b")) {
        printf("the b=%d\n",atoi(argv[2])/10%10);
   }
}
