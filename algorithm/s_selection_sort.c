#include <stdio.h>

void swap(int* array,int i,int j);
void selection_sort(int* array,int count);

int main(int argc, const char *argv[])
{
    int array[10] = {9,8,7,6,5,4,3,2,1,0};
    selection_sort(array,10);
    int i = 0;
    while(i < 10) {
        printf("%d,\n",array[i]);
        i++;
    }
    return 0;
}


void selection_sort(int* array,int count)
{
    int i,j,min_index;
    for(i = 0;i<count-1;i++) {
        min_index = i;
        for(j = i+1; j < count; j++) {
            if(array[j]<array[min_index]) {
                min_index = j;
            }
        }
        swap(array,i,min_index);
    }
}

void swap(int* array,int i,int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
