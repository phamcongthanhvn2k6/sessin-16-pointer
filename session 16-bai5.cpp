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

void capnhap(int **array, int *size, int vitri) {
    int giatri;
    printf("Nhap gia tri muon cap nhap: ");
    scanf("%d", &giatri);

    (*size)++;
    *array = (int *)realloc(*array, (*size) * sizeof(int));
    if (*array == NULL) {
        printf("Khong the cap phat bo nho!");
        exit(1);
    }
    
    for (int i = *size - 1; i > vitri; i--) {
        (*array)[i] = (*array)[i - 1];
    }
    (*array)[vitri] = giatri;
}

int main() {
    int size, vitri;
    printf("Nhap so phan tu trong mang ban muon in: ");
    scanf("%d", &size);
    
    int *array = (int *)malloc(size * sizeof(int));
    
    if (array == NULL) {
        printf("Khong the cap phat bo nho!");
        return 1;
    }
    
    nhapmang(array, size);
    inmang(array, size);
    
    printf("Nhap vi tri muon cap nhap la: ");
    scanf("%d", &vitri);
    
    capnhap(&array, &size, vitri);
    inmang(array, size);
    
    free(array);
    
    return 0;
}

