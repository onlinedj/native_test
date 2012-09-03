#include <stdio.h>

static void insert_sort(int* array, int length); 

int main(int argc, const char *argv[])
{
    int array[6] = {10,3,7,4,2,9};
    insert_sort(array,6);
    printf("%d, %d, %d, %d, %d, %d \n",array[0],array[1],array[2],array[3],array[4],array[5]);
    return 0;
}

static void insert_sort(int* array, int length) 
{
    int i;
    for(i=1;i<length;i++) {
        int j = i-1;
        int key = array[i];
        while(j>=0 && array[j] > key) {
           array[j+1] = array[j];
           j--;
        }
        array[j+1] = key;
    }
}
