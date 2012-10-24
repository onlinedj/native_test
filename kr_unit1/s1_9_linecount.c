/*=============================================================================
#     FileName: s1_9_linecount.c
#         Desc: count the longest line length
#       Author: Jacky
#        Email: xinle.yang@gmail.com
#     HomePage: yangxinle.com
#      Version: 0.0.1
#   LastChange: 2012-10-19 13:31:09
#      History:
=============================================================================*/
#include <stdio.h>

static int __getline() {
    char c;
    int n = 0;
    while((c = getchar()) !=EOF) {
        if(c != '\n') {
            n++; 
        } else {
            return n; 
        } 
    }
    return -1;

}

int main(int argc, const char *argv[])
{
    int current,new,line,cline;
    current = new = line = cline = 0;
    while((new = __getline()) != -1) {
    
        line++;
        if(current<new) {
            current = new; 
            cline = line;
        }
    }
    printf("current=%d,line=%d,cline=%d\n",current,line,cline);
    
    return 0;
}
