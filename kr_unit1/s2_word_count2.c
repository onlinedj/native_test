/**
 *
 * File: s2_word_counting2.c
 * Author: Jacky Yang
 * Date: 2011-12-21
 * Desc: 
 *    better written for word counting.
 */
#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    char c;
    int state,nc;
    state = OUT;
    nc = 0;
    while((c=getchar())!='*') {
        printf("%08x \n",c);
        if(c=='\n'||c==' '||c=='\t') {
            state = OUT;
        } else if(state==OUT) {
            state = IN;
            nc++;
        }
    }
    printf("count=[%d]",nc);
    return 0;
}
