#include <stdio.h>
#include <ctype.h>

#define SIZE 10

int getint(int *pn);

int main(int argc, const char *argv[])
{
    int n, *intarray[SIZE], *pn;
    for(int n = 0;n<SIZE&&getint(*intarray[n])!=EOF;n++);
    return 0;
}

int getint(int *pn)
{
   int c; 
   while(isspace(c = getc()))
       ;
   if(!isdigit(c)&&!c=='+'&&!c=='-'&&!c==EOF) {
        ungetc();
        return 0;
   }
}
