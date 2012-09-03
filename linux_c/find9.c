#include <stdio.h>

#define true 1;
#define false 0;

int find9in100();
int contains9(int i);

int main(int argc, const char *argv[])
{
    printf("%d found\n",find9in100());
    return 0;
}

int find9in100()
{

    int i = 1,count = 0;
    while(i<=100) {
        if(contains9(i)) count++;
        i++;
    }
    return count;
}

int contains9(int i)
{
    if(i%10==9) return true;
    if(i/10==9) return true;

    return false;
}
