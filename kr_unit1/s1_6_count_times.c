/*=============================================================================
#     FileName: s1_6_count_times.c
#         Desc: count the times of number shows
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-10 14:15:17
#      History:
=============================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int times[10] = {0};
    int nwhite = 0;
    int ncr = 0;
    int c;
    while((c=getchar()) != EOF) {
        if(c>='0' && c<='9') {
            times[c-'0']++; 
        } else if(c == '\n') {
            ncr++; 
        } else if(c == ' ') {
            nwhite++; 
        }
    
    }
    char *buff = (char*) malloc(200*sizeof(char));
    char *temp = buff;
    int n=0;
    while(n<10) {
       temp += sprintf(temp, "i=%d,nt=%d\n",n,times[n]); 
       n++;
    }
    printf("nt list here:\n%s", buff);

    printf("ncr=%d,nw=%d \n", ncr, nwhite);
    free(buff);
    return 0;
}
