#include<stdio.h>

void swap(int *a , int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a,b;
	printf("Nhap hai so a va b: "); 
	scanf("%d %d",&a, &b);
	printf("Hai so a va b truoc khi doi la: ");
	printf(" a=%d va b=%d \n", a,b);
	swap(&a,&b);
	printf("Hai so a va b sau khi doi la: ");
	printf(" a=%d va b=%d \n", a,b);
	
	return 0;
	
}
