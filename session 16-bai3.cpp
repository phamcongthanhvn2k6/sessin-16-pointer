#include<stdio.h>

int sum(int *a , int *b){
	int sum;
	sum= *a+*b;
	return sum;
}

int main(){
	int a,b;
	printf("Nhap hai so a va b: "); 
	scanf("%d %d",&a, &b);
	printf("Hai so a va b la: ");
	printf(" a=%d va b=%d \n", a,b);
	sum(&a,&b);
	printf("Tong cua hai so la: %d ",sum(&a,&b));
	
	return 0;
	
}
