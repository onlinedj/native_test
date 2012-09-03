#include <stdio.h>

void quick_sort(int* array,int left,int right);
int partition(int* array,int left,int right);
void swap(int* array,int a,int b);

int main(int argc, const char *argv[])
{
    int array[10] = {9,8,7,6,5,4,3,2,1,0};
    quick_sort(array,0,9);
    int i = 0;
    while(i<10) {
        printf("%d,\n",array[i]);
        i++;
    }
    return 0;
}

void quick_sort(int* array,int left,int right)
{
    if(right>left) {
        int index = partition(array,left,right);
        quick_sort(array,left,index-1);
        quick_sort(array,index+1,right);
    }
}

int partition(int* array,int left,int right)
{
    int pivot = left;
    int pivot_value = array[pivot];
    int j,index=left;
    swap(array,pivot,right);
    for(j = left;j < right;j++) {
        if(array[j]<pivot_value) {
            swap(array,index++,array[j]);
        }
    }
    swap(array,index,right);
    return index;
}

void swap(int* array,int a,int b)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}
