#include <stdio.h>
#include <calc.h>
/*#include <dlfcn.h>*/

//extern unsigned int multi(unsigned int a, unsigned int b);

int main(int argc, const char *argv[])
{
/*	void *dl_handle;
	unsigned int (*fn)(int,int);
	char* error;
	dl_handle = dlopen("./libcalc.so",RTLD_NOW);
    if (dl_handle == NULL) {
        fprintf(stderr, "dlopen failed: %s\n", dlerror());
        exit(-1);
    }
    fn = dlsym(dl_handle,"multi");
	if((error=dlerror()) != NULL) {
		fprintf(stderr, "dlopen failed: %s\n", dlerror());
		exit(-1);
	} */
	unsigned int i = 15,j = 100;
	printf("result: %d\n",multi(i,j));
	return 0;
}
