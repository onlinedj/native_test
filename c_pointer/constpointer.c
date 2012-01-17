#include <stdio.h>

int main(int argc, const char *argv[])
{
    //the two declares have the same func.
    //recommend the second one for compiler check the error usage.
    char* str_p = "hello";
    const char* str_p2 = "world";
    *(str_p+1) = 'f';
    printf("%s\n",str_p);
    return 0;
}
