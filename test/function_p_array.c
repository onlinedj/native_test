#include <stdio.h>
#include <stdlib.h>

void printA()
{
    printf("A is printed\n");
}
void printB()
{
    printf("B is printed\n");
}
void printC()
{
    printf("C is printed\n");
}
void printD()
{
    printf("D is printed\n");
}
int main(int argc, const char *argv[])
{
    void (*funcs[4])();
    funcs[0] = printA;
    funcs[1] = printB;
    funcs[2] = printC;
    funcs[3] = printD;
    if(2 == argc) {
        int i = atoi(argv[1]);
        printf("the i=%d\n", i);
          switch(i) {
          case 0:
              (*funcs[0])();
              break;
          case 1:
              (*funcs[1])();
              break;
          case 2:
              (*funcs[2])();
              break;
          case 3:
              (*funcs[3])();
              break;
          default:
              printf("cannot found correct printer\n");
              break;
          }
    } else {
        printf("pls give the correct num\n"); 
    }

    return 0;
}
