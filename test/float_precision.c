#include <stdio.h>

int main(int argc, const char *argv[])
{
    float a = 3.141592753168254f;
    float b = 6.23431f;
    printf("a=%f,b=%f,bh=%#x\n",a,b,*((int *)(&b)));
    float c = 113431.4461325473289;
    printf("c=%f,ch=%#x\n",c,*((int *)(&c)));
    return 0;
}
