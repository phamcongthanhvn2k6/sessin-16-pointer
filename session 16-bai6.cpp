#include<stdio.h>
#include<stdlib.h>

void inmang(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

void nhapmang(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", (array + i));
    }
}

void timkiem(int *array, int giatri) { 
		int i = 0; 
		int found = 0; 
		
		while (array[i] != '\0') {  
			if (*(array + i) == giatri) { 
			printf("phan tu %d duoc tim thay o vi tri %d\n ", giatri, i); 
			found = 1; 
				} 
			i++; 
				}
			if (!found){ 
			printf("phan tu %d khong co trong mang .\n", giatri); 
				} 
			}
						 

int main() {
    int size, vitri,giatri;
    printf("Nhap so phan tu trong mang ban muon in: ");
    scanf("%d", &size);
    
    int *array = (int *)malloc(size * sizeof(int));
    
    if (array == NULL) {
        printf("Khong the cap phat bo nho!");
        return 1;
    }
    
    nhapmang(array, size);
    inmang(array, size);
    
    printf("Nhap gia tri muon tim kiem la: ");
    scanf("%d", &giatri);
    
	timkiem(array,giatri);
   
    free(array);
    
    return 0;
}

