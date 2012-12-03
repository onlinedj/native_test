/*=============================================================================
#     FileName: print_num.c
#         Desc: number input by column,but print by row.
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-11-27 17:42:17
#      History:
=============================================================================*/

#include <stdio.h>
#include <string.h>
#define COLS 10
#define ROWS 5
#define BUFF_SIZE ROWS*(COLS-1)
static int buffer[BUFF_SIZE];
static int *ptr = buffer;
static int row = 0;
static int printed_rows = 0;


void print_page_comma(void)
{
    printf("==========page end===============\n");
}

void print_linefeed(void)
{
    printf("\\n\n");
}

void print_num(int n)
{
   printf("%d ",n); 
}

void print_line(int n)
{
    int *p;
    for(p = buffer+row;p<buffer+BUFF_SIZE;p += ROWS/*not COLS for the buffer stores by COLS,so the buffer has ROWS-size columns*/) {
        //printf("inloop: row=%d p = %ld\n",row,p-buffer);
        print_num(*p); 
    }
    print_num(n);
    print_linefeed();
    row++;
}

void flush_buff(void)
{
    int used_elements = ptr - buffer;
    int used_rows;
    if(used_elements>ROWS) {
        used_rows = ROWS; 
    } else {
        used_rows = used_elements;
    }
    int row,*p;
    for(row = printed_rows; row< used_rows; row++) {
        for(p = buffer+row; p < ptr; p += ROWS) {
            print_num(*p); 
        } 
        print_linefeed();
    }
    print_page_comma();
    

}

void queue_buff(int n)
{
    //printf("ptr=%d,buffer=%d\n",ptr,buffer+BUFF_SIZE);
    if(ptr == buffer+BUFF_SIZE) {
        if(row == ROWS) { //not row = ROWS!!!!! we should use ROWS == row to check the problem.
            /*printf("row full\n");*/
            print_page_comma(); 
            ptr = buffer;
            row = 0;
            *ptr++ = n;
            printed_rows = 0;
        } else {
            /*printf("printline\n");*/
            print_line(n); 
            printed_rows++;
            //because the ctraps thinks of using BUFF_SIZE ROWS*(COLS-1), we should remember printed lines.
            //for buffer may be full, but last col may be not full , so we should remember howmany lines we printed
            //so that when we flush , we could do right.
        }
    } else {
        *ptr++ = n; 
    }
}

void input_num(int n)
{
    if(n < 0) {
        flush_buff(); 
    } else {
       queue_buff(n);  
    }
}
int main(int argc, const char *argv[])
{
    int n = 0;
    while(n++<97) {
        input_num(n); 
    }
    input_num(-1);
    return 0;
}
