#include <stdio.h>

/**
 * notice 0-based array should use 2i+1 as left child & 2i+2 as right child
 */
void heap_sort(int *array,int count);
void build_heapify(int *array,int count);
void sift_down(int *array,int start,int end);
void swap(int *array,int a,int b);

int main(int argc, const char *argv[])
{
    int array[10] = {7,8,9,6,3,4,5,2,0,1};
    heap_sort(array,10);
    //build_heapify(array,10);
    int i = 0;
    while(i<10) {
        printf("%d,\n",array[i]);
        i++;
    }
    return 0;
}


void heap_sort(int *array,int count)
{
    int start = 0;
    //first heapify the array
    build_heapify(array,count);
    //second do a cycle to remove the max
    while(count > 1) {
        swap(array,start,count-1);
        count--;
        sift_down(array,start,count);
    }
    //third sift down the array
}
void build_heapify(int *array,int count)
{
    int index = count/2;
    while(index>=0) {
        sift_down(array,index,count);
        index--;

    }
}
void sift_down(int *array,int start,int end)
{
    int root_index = start;
    int max_index = start;
    while((root_index*2+1)<end) { 
        if(array[root_index*2+1]>array[max_index]) {
            max_index = root_index*2+1;
        }
        if((root_index*2+2<end) && array[root_index*2+2]>array[max_index]) {
            max_index = root_index*2+2;
        }
        if(root_index == max_index) break;
        swap(array,max_index,root_index);
        root_index = max_index;
    }
}
void swap(int *array,int a,int b)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}
