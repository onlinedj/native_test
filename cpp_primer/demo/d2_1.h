#ifndef DEMO2_1_H
#define DEMO2_1_H
#include <iostream>

using namespace std;
class IntArray {
	public:
		int size(){return _size;}
		IntArray(int size) {_size = size;}
		explicit IntArray() {_size = defaultSize;}
	private:
		int _size;
		static const int defaultSize = 12;
};
#endif
