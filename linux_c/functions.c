  /*
   * Author jacky yang
   * Date 20120405
   *
   */
#include <stdio.h>

int main(void)
{
    test(123);
    return newline(123);
}

void newline(void)
{
    printf("newline\n");
    return 0;
}

void test(void)
{
    newline();
}
