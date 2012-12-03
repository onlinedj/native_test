/*=============================================================================
#     FileName: write_buffer.c
#         Desc: it's a demo of writing chars to buffer.
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-27 16:47:48
#      History:
=============================================================================*/
#include <stdio.h>
#include <string.h>

#define MAX_LEN 10
static char buffer[MAX_LEN] = {'\0'};
static char *ptr = buffer;

int str_cpy(char *str, int n)
{
    while(n-->0) {
        *ptr++ = *str++; 
    } 
    return 0;
}

int flush_buff()
{
    printf("%s\n",buffer);
    return 0;
    
}

int write_buff(char *str, int n)
{
    while(n>0) {
        printf("==========%d=======\n",n);
        if(ptr == &buffer[MAX_LEN]) {
            printf("buff full, now flush\n");
            flush_buff();
            memset(buffer,0, MAX_LEN);
            ptr = buffer;
        } else {
            printf("ptr=%d,buffmax=%d\n", ptr, buffer+MAX_LEN); 
        }
        int k;
        int remain = buffer + MAX_LEN - ptr;
        k= n>remain?remain:n;
        printf("k=%d\n", k);
        str_cpy(str,k);
        str += k;
        //ptr += k; str_cpy already change the position of ptr, so don't move it.
        n -= k;

    }
    flush_buff();
    return 0;
}

int main(int argc, const char *argv[])
{
    char *name = "klllasdfghjkl";    
    write_buff(name, 13);
    write_buff(name,5);
    return 0;
}


