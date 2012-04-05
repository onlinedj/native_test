/**
  *use macros to implement function of swap.
  *jacky yang 20120330
  */
#include <stdio.h>

#define SWAP(A,B) do{int t;t = A;A = B;B = t;}while(0)
#define SWAP2(A,B) do{A=A+B;B=A-B;A=A-B;}while(0)

    int main(void) {
        int a = 12;
        int b = 25;
        //SWAP(a,b);
        SWAP2(a,b);
        printf("a=%d,b=%d \n",a,b);
        return 0;
    }
