#include <stdio.h>

void bubble_sort(int* array,int count);

int main(int argc,char** argv)
{
    int array[9] = {9,7,5,4,6,8,1,3,2};
    bubble_sort(array,9);
    int i;
    for(i=0;i<9;i++){
        printf("current:%d \n",array[i]);
    }
    return 0;
}
void bubble_sort(int* array,int count)
{
    int i,j;
    for(i = 0; i < count; i++) {
        for(j = count-1; j>i;j--) {
            if(array[j]<array[j-1]) {
                int tmp = array[j];
                array[j] = array[j-1];
                array[j-1] = tmp;
            }
        }
    }
}
