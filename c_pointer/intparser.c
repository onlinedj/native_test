#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define EOF 'q'

int getch();
void ungetch();
int getint(int* pn);

int main(int argc, const char *argv[])
{
    char* buffer;
    if(argc>1) {
        buffer = argv[1];
        int n, i, *intarray[argc-1], *pn;
        for (i = 2; i < argc; i++) {
            strcat(buffer,*(argv+i)); 
        }
    } else {
        return 0;
    }
    printf("buffer %s\n",buffer);
/*    for(int n = 0;n<SIZE&&getint(*intarray[n])!=EOF;n++);*/
    return 0;
}

/*int getint(int* pn)*/
/*{*/
/*    int c,sign; */
/*    while(isspace(c = getch()))*/
/*        ;*/
/*    if(!isdigit(c)&&!c=='+'&&!c=='-'&&!c==EOF) {*/
/*        ungetch();*/
/*        return 0;*/
/*    }*/
/*    sign = c=='-'?-1:1;*/
/*    if(c=='+'||c=='-') {*/
/*        getch();*/
/*    }*/
/*    for(*pn=0;isdigit(c);c=getch()){*/
/*        *pn = *pn*10+(c-'0');*/
/*    }*/
/*    *pn *= sign;*/
/*    if(c != EOF) ungetch(c);*/
/*    return c;*/
/**/
/*}*/
