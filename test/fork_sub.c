/*=============================================================================
#     FileName: fork_sub.c
#         Desc: test the fork function's mechanism
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-24 14:33:53
#      History:
=============================================================================*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, const char *argv[])
{
    int i;
    for(i=0;i<2;i++)
    {
        fork();
        printf("ppid=%d,pid=%d,i=%d\n",getppid(),getpid(),i);
        sleep(15);
        /*printf("-\n");*/
    }
    return 0;
}

