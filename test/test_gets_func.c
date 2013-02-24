#include <stdio.h>

/*
 *int main(void)
 *{
 *    char buff[10];
 *    memset(buff,0,sizeof(buff));
 *
 *    gets(buff);
 *
 *    printf("\n The buffer entered is [%s]\n",buff);
 *
 *    return 0;
 *}
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int flag = 0;
    char passwd[10];

    memset(passwd,0,sizeof(passwd));

    strcpy(passwd, argv[1]);

    if(0 == strcmp("LinuxGeek", passwd))
    {
        flag = 1;
    }

    if(flag)
    {
        printf("\n Password cracked \n");
    }
    else
    {
        printf("\n Incorrect passwd \n");

    }
    return 0;
}
