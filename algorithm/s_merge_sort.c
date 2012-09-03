#include <stdio.h>
#include <stdlib.h>

void merge_sort(int* array, int start, int end);
void merge(int* array, int start, int split, int end);

int main(int argc, const char *argv[])
{
    int array[9] = {1,5,2,7,4,3,9,8,6};
    merge_sort(array,0,8);
    int i = 0;
    char* buffer = (char*) malloc(18*sizeof(char));
    while(i < 18) {
        sprintf(buffer+i,"%d",array[i/2]);
        sprintf(buffer+i+1,"%c",',');
        i = i+2;
    }
    //printf("current seq:\n%s\n",buffer);
    return 0;
}

void merge_sort(int* array, int start, int end)
{
    //printf("%d, %d\n",start,end);
    if(start < end) {
        int count = (end + start)/2;
        merge_sort(array,start,count);
        merge_sort(array,count+1,end);
        merge(array,start,count,end);
        printf("-----------------\n");
    }
}

void merge(int* array, int start, int split, int end)
{
    int n1 = split - start + 1;
    int n2 = end - split;
    int left[n1];
    int right[n2];
    int i;
    for(i=0;i<n1;i++) {
        left[i] = array[start+i];
    }
    for(i=0;i<n2;i++) {
        right[i] = array[i+split+1];
    }
    i = 0;
    int j = 0,k = 0;
    for(k = start;k <= end;k++) {
        if(i == n1 && j == n2) {
            break;
        }
        if(i == n1) {
            array[k] == right[j];
            j++;
        } else if(j == n2) {
            array[k] = left[i];
            i++;
        } else if(left[i]<=right[j]) {
            array[k] = left[i];
            i++;
        } else {
            array[k] = right[j];
            j++;
        }
        printf("%d\n",array[k]);
    }

}
