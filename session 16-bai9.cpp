#include<stdio.h>
#include<stdlib.h>

void nhapmang(int *array,int size){
	for(int i=0;i<size;i++){
		printf("Nhap vao array[%d]: ",i);
		scanf("%d",(array+i));
	}
}

void inmang(int *array,int size){
	for(int i=0;i<size;i++){
		printf("%d ",* (array+i));
	}
	printf("\n");
}

void them (int *array,int size,int giatri, int vitri ){

	for(int i = size;i>vitri;i--){
		*(array+i) = *(array + i -1);
	}
	*(array +vitri)	= giatri;
}

int main(){
	int size,giatri,vitri;
	printf("Nhap mang co so luong phan tu la: ");
	scanf("%d",&size);
	
	int *array = (int *) malloc(size * sizeof(int));
	if(array == NULL){
		printf("Mang khong cap phat duoc bo nho!");
		exit(1) ;
	}
	
	nhapmang(array,size);
	printf("mang truoc khi duoc sua la: \n");
	inmang(array,size);
	
	
	printf("Nhap gia tri ban muon them la: ");
	scanf("%d",&giatri);
	printf("Nhap vi tri muon them la: ");
	scanf("%d",&vitri);
	
	size++;
	array =(int *)realloc(array, size * sizeof(int));
	if(array == NULL){
		printf("khong the cap phat bo nho!");
		exit (1);
	}
	
	them(array,size-1,giatri,vitri);
	inmang(array,size);
	
	free(array);
	
	return 0;
}
