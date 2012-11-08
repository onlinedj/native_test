/*=============================================================================
#     FileName: s8_3_cocu.c
#         Desc: this file test the create open close unlink function.
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-24 14:26:14
#      History:
=============================================================================*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

static int create_file(const char *name)
{
    return open(name, O_CREAT, S_IRWXU|S_IRWXG|S_IRWXO); 
}

int main(int argc, const char *argv[])
{
    if(argc<2) {
        fprintf(stdout,"like: %s newfile\n", argv[0]); 
    }
    int fd;
    if((fd = create_file(argv[1]))<0) {
        fprintf(stderr," create failed error_n=%d\n",fd); 
    } else {
        fprintf(stdout," create success fd=%d\n",fd); 
    }
    unlink(argv[1]);
    close(fd);
    return 0;
}

