#include <iostream>
/**
 * this demo shows recursive assignment
 */
using namespace std;
int main(int argc, const char *argv[])
{
    int *pi = new int(10);
    int *pia = new int[10];
    while(*pi > 0) {
        pia[*pi-1] = *pi;
        cout<<"pia["<<(*pi-1)<<"]="<<*pi<<endl;
        *pi = *pi - 1;
    }
    delete pi;
    delete [] pia;
    return 0;
}
