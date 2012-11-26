#include "exchange.h"
int main(int argc, const char *argv[])
{
    int a = 5;
    int b = 8;
    exchange1(a,b);
    exchange2(a,b);
    return 0;
}

void exchange1(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a=%d,b=%d\n",a,b);
}
void exchange2(int a,int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d,b=%d\n",a,b);
}
