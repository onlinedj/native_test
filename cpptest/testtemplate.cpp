#include <iostream>

using namespace std;

template <class T>
T mymin(T t1, T t2) {
return (t1<t2)?t1:t2;
}

int main(int argc, const char *argv[])
{
    int a = 5, b= 3;
    cout<<mymin(a,b)<<endl;
    return 0;
}
