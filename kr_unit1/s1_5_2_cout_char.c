#include <stdio.h>

int main(int argc, const char *argv[])
{
    char c;
    int nc = 0;
    while((c = getchar()) != EOF) {
        printf("the c is %d\n", c);
        nc++; 
    }
    printf("total nc=%-6d\n", nc);
    return 0;
}
