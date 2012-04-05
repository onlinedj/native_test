#include <stdio.h>
#define N 10

int main(void)
{
    int a[N] = {1,9,7,4,2,3,9,8,5,6};
    int sum = 0;
    int sum2 = 0;
    int i = 0;
    for(i=0;i<N;i++) {
        sum += a[i];
    }
    sum2 = (1+N-1)*N/2;
    printf("result=%d",sum-sum2);
}
