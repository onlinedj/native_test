/*
 * Author jacky yang
 * Date 2012.04.04
 *
 */
#include<stdio.h>

int main(void) 
{
    //print the % its self
    printf("you wanna %%  \n");
    //print the diff of \r back to the start of line \n switchline
    printf("you wanna a linefeed|\n");
    printf("you wanna a carrierreturn|\r");
    printf("you wanna a tab|\t\n");
    //use escape sequence
    printf(" \" \? \'\n");
    //print number & char
    //%9.1f means the number takes 9 space or more including dot 
    printf("the list : %d %s %c %o %x %ld %9.1f",44,"cc",'a',44,44,100L,1.5f);
    return 0;
}
