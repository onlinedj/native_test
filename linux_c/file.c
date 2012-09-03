/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h> 

int main(int argc, const char *argv[])
{
    const char *path = argv[1];
    int fd = open(path,O_RDWR|O_TRUNC);
    if(fd < 0) {
        fprintf(stderr, "opening errno %d\n",errno);
        exit(-1);
    }
    char buffer[100];
    int len = read(fd,buffer,sizeof(buffer));
    printf("%s  %d\n",buffer,len);

    const char* buffer2;
    buffer2 = "1234567890";
    len = write(fd,buffer2,10);
    fprintf(stdout, "writing %s %d\n",buffer2,len);
    return 0;
}
