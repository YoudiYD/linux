#include"ch2.h"
int main (){
	int ret;
	ret =write(1,"HelloWorld!\n",13);
	sleep(100);
	exit(0);
}
