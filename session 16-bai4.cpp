#include<stdio.h>
#include<stdlib.h>

void inmang(int *array,int size){
		for(int i = 0;i<size;i++){
			printf("%d ", *(array +i));
		}
		printf("\n");	
}

void nhapmang(int *array,int size){
	for (int i=0;i<size;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d", (array+i));
	}	
}

int main(){
	int size;
	printf("Nhap so phan tu trong mang ban muon in: ");
	scanf("%d",&size);
	
	int *array =(int *)malloc(size * sizeof(int));
	
	if(array == NULL){
		printf("Khong the cap phat bo nho!");
		return 1;
	}
	
	nhapmang(array,size);
	inmang(array,size);
	
	free(array);
	
	return 0;
}
