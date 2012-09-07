#include <stdio.h>

extern unsigned int multi(unsigned int a, unsigned int b);

int main(int argc, const char *argv[])
{
	unsigned int i = 15,j = 100;
	unsigned int k = multi(i,j);
	printf("result: %d\n",k);
	return 0;
}
