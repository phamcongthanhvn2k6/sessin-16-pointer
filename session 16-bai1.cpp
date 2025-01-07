#include<stdio.h>

int main(){
	int a=10;
	int *ptr;
	ptr = &a;
	printf("Gia tri cua Con tro: %d\n",*ptr);
	printf("Dia chi cua con tro: %d\n",&ptr);
	
	return 0;
}
