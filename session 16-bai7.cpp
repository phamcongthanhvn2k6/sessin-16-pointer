#include<stdio.h>
#include<stdlib.h>

void swap(int *array,int size){
	int temp;
	for (int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(*(array+i) > *(array+j)){
				temp = *(array+i);
				*(array+i)=*(array+j);
				*(array+j)=temp;
			}
		}
	}
}

void nhapmang(int *array, int size){
	for(int i=0;i<size;i++){
		printf("Nhap array[%d]: ",i);
		scanf("%d",&array[i]);
	}
}

void inmang(int *array, int size){
	for(int i=0;i<size;i++){
		printf("Phan tu array[%d]: %d\n",i,array[i]);
	}
	printf("\n");
}

int main(){
	int size;
	
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d",&size);
	
	int *array = (int *)malloc (size * sizeof(int));
	
	nhapmang(array,size);
	inmang(array,size);
	
	swap(array,size);
	
	printf("Cac phan tu sau khi duoc sap xep la: \n");
	inmang(array,size);
	
	free(array);
	
	return 0;
}
