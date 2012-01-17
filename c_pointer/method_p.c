/*
 *
 * File: method_p.c
 * Author: Jacky Yang
 * Date: 2011-12-27
 * Desc:
 *    method pointer demo.
 */
#include <stdio.h>

void my_fun(int x);
void (*my_p)(int);
int main(int argsc,int **argsv) 
{
    my_fun(10);
    (*my_fun)(20);
}

void my_fun(int x)
{
    printf("the variable is %d\n",x);
}
