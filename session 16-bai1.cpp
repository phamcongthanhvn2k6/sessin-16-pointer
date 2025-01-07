#include<stdio.h>

int main(){
	int a=10;
	int *ptr = &a;
	ptr = &a;
	printf("Gia tri cua Con tro: theo cach 1: %d\n",a);
	printf("Dia chi cua con tro theo cach 1: %d\n",&ptr);

	printf("Gia tri cua Con tro: theo cach 2: %d\n",*ptr);
	printf("Dia chi cua con tro theo cach 2: %d\n",(void*)ptr);
	
	return 0;
}
