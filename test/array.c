/*=============================================================================
#     FileName: array.c
#         Desc: test array and pointer's diff
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-23 16:51:10
#      History:
=============================================================================*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int attr[4][5];
    /*test2(attr);*/
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",attr[j]); 
        }
    }
    for( i = 0 ; i < 4 ; i++ )
    {
        for( j = 0 ; j < 5 ; j ++ )
        {
            printf("--%d--\n", attr[i][j]);
        }
    }
    return 0;
}
void test2(int pscore[4][5])
{
    /*int arr[5][5],i;
    for(i=0;i<5*5;i++) {
        arr[i] = i; 
        printf("%d\n",arr[i]);
    }*/
    int i,j;
    for( i = 0 ; i < 4 ; i++ )
    {
        for( j = 0 ; j < 5 ; j ++ )
        {
            scanf("%d", pscore[j]);
        }
    }
}

void test1()
{

    int a[5] = {1,4,5,6,7};
    int *b = a+4;
    printf("b=%d\n",*b);

}
