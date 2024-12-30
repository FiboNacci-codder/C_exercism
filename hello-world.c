#include <stdio.h>

const char *hello(void){
	return "Hello, world!";
}


int main(){
	const char *a = hello();
	printf("%s\n", a);
	return 0;
}
