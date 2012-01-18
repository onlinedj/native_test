#include <stdio.h>
#include <string.h>

int checkmatches(char* str, const char* expect);
int int main(int argc, const char *argv[])
{
    char* sp;
    if(argc>1) {
        sp = argv[1];
    } else {
        return 0;
    }
    return checkmatches(sp,"ab");
}

int checkmatches(char* str, const char* expect)
{
    int i = 0;
    while(compare(str,expect))
        i++;
    return i;
}

int compare(char* str, const char* expect)
{
    while(*expect!=*str)
        str++;
}
