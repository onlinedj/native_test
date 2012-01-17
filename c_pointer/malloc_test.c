#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_memory(char *str);

int main(int argc, const char *argv[])
{
    char *test_str;
    get_memory(test_str);
    test_str = "hello world";
    printf("the string [%s]",test_str);
    return 0;
}

char *get_memory(char *str)
{
    str = (char *) malloc(100);
    return str;
}
