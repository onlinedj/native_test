#include <vector>
#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{    
    vector<int> ivec;
    vector<int>* mVec = &ivec;
    for(int i = 0;i<20;i++) {
        mVec->push_back(i);
        cout<< "mVec.size="<<mVec->size()<<endl;
    }
    return 0;
}


