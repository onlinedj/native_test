#include <stdio.h>
#include <string.h>

void bubble_sort(int** p,int size);
void choose_sort(int** p,int size);
void insert_sort(int** p,int size);

int main(int argc, const char *argv[])
{
    int sort = 3;
    int a[6] = {5,1,3,9,2,7};
    int size = sizeof(a)/sizeof(int);
    int* sp = a;
    switch(sort) {
    case 1:
        bubble_sort(&sp,size);
        break;
    case 2:
        choose_sort(&sp,size);
        break;
    case 3:
        insert_sort(&sp,size);
        break;
    }
    int i;
    for(i=0;i<size;i++) {
       printf("%d\n",*(sp+i)); 
    }
    return 0;
}
void bubble_sort(int** p,int size)
{
    int i,j,k;
    k = size-1;
    int** s = p;
    for(i=0;i<size-1;i++) {
        for(j=0;j<k;j++) {
            printf("second loop j=%d,k=%d\n",j,k);
            if(*(*p+j)>*(*p+j+1)) {
                printf("if clause, p=%d,p+1=%d\n",(*(*p+j)),(*(*p+j+1)));
                int temp = *(*p+j+1);
                *(*p+j+1) = *(*p+j);
                *(*p+j) = temp;
            }
        }
        --k;
    }
}
void choose_sort(int** p,int size)
{
    int i,j,k,min,min_index;
    k = size;
    min_index = 0;
    for(i=0;i<k-1;i++) {
        min = *(*p+i);
        min_index = i;
        for(j=i;j<k;j++) {
           if(*(*p+j)<min) {
                min_index = j;
                min = *(*p+j);
                printf("if clause, min=%d,min_index=%d\n",min,min_index);
           }
        }
        int temp = *(*p+i);
        *(*p+i) = min;
        *(*p+min_index) = temp;
    }

}
void insert_sort(int** p,int size)
{
    int i,j,temp;
    for (i = 1; i < size; i++) {
        temp = *(*p+i);
        for(j=i; j>0 && temp < *(*p+j-1); j--) {
            *(*p+j) = *(*p+j-1);
        }
        *(*p+j) = temp;
    }

}
