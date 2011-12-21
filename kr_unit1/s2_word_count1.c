/**
 *
 * File: s2_word_count1.c
 * Author: Jacky Yang
 * Date: 2011-12-21
 * Desc:
 *    count the words
 *   (bad implementation)
 */
#include <stdio.h>
#include <string.h>

#ifndef START
#define START 0
#endif

#ifndef END
#define END 1
#endif

#ifndef UNKNOWN
#define UNKNOWN -1
#endif

int is_word_end(char c);

int main()
{
    char input;
    int current_status,word_count;
    current_status = UNKNOWN;
    word_count = 0;
    while((input = getchar()) != '*') {
        if(is_word_end(input)==0 && current_status==UNKNOWN) {
            current_status = START;
            word_count++;
        } else if(is_word_end(input)==0 && current_status==END) {
            current_status = START;
            word_count++;
        } else if(is_word_end(input)==1 && current_status==START) {
            current_status = END;
        }
    }
    printf("[count:%-8d]\n",word_count);
    return 0;
}

int is_word_end(char c)
{
    switch(c) {
        case '\n':
        case '\t':
        case ' ':
            return 1;
        default:
            return 0;
    }
}
