#include <iostream>

int main(int argc, const char *argv[])
{
    int ival = 1024;//standard variable
    int *pi = &ival;//pointer
    int *pi2 = new int(1024);//int object
    int *pi3 = new int[4];//int object array

    /* remember to delete dynamic mem variables : pi2 pi3 ,but pi is static*/
    delete pi2;
    delete [] pi3;
    return 0;
}
