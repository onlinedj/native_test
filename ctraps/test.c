#include <stdio.h>

static char a[100] = {'a'};
static char *b = a;
int main(int argc, const char *argv[])
{
    a = {'a'};
    
    return 0;
}
