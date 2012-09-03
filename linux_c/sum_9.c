/*
 * Author jacky yang
 * Date 20120405
 *
 */
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int result;
    int n = 1;
    while(n<100) {
       if(n<10) {
           if(get_units(n)==9) {
               result++; 
           }
       } else {
          if(get_units(n)==9) {
            result++;
          }
          if(get_tens(n)==9) {
            result++;
          }
       }
       n++;
    }
    printf("%d\n",result);
    return 0;
}
int get_units(int n)
{
   return n%10; 
}
int get_tens(int n)
{
   return n/10%10; 
}
