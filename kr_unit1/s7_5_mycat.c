/*=============================================================================
#     FileName: s7_5_mycat.c
#         Desc: a simple demo of cat function.
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-24 11:10:55
#      History:
=============================================================================*/
#include <stdio.h>

static print_file(const char *file_name)
{
    FILE *fp = fopen(file_name, "r");
    int c;
    while((c = fgetc(fp)) != EOF) {
        putchar(c); 
    }
}

static mycat(int argc, const char **argv)
{
    int i;
    for(i=1;i<argc;i++) {
        print_file(argv[i]);
    }
}

static usage(const char *argv0)
{
    fprintf(stdout, "use like: %s file1 file2 ...\n", argv0);
}

int main(int argc, const char *argv[])
{
    if(argc<3) {
        usage(argv[0]); 
    }
    mycat(argc,argv);
    return 0;
}

