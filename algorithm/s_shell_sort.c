#include <stdio.h>

void shell_sort(int* array,int count);

int main(int argc, const char *argv[])
{
    int array[10] = {9,8,7,6,5,4,3,2,1,0};    
    shell_sort(array,10);
    int i = 0;
    while(i<10) {
        printf("%d,\n",array[i]);
        i++;
    }
    return 0;
}

void shell_sort(int* array,int count)
{
    int gap = count/2;
    int j,k;
    while(gap > 0) {
        for(j=gap;j<count;j++) {
            k = j-gap;
            int key = array[j];
            while(k>=0 && array[k] > key) {
                array[k+gap] = array[k];
                k -= gap;
            }
            array[k+gap] = key;
        }
        gap = gap/2;
    }
}
