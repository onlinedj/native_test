#include "d2_1.h"

int main(int argc, const char *argv[])
{
	IntArray i(5);
	IntArray* j = new IntArray(10);
	cout<<"i.size="<<i.size()<<endl;
	cout<<"j.size="<<j->size()<<endl;
	delete j;
	return 0;
}
