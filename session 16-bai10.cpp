#include <stdio.h>
#include <stdlib.h>

void nhapmang(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("Nhap vao array[%d]: ", i);
        scanf("%d", (array + i));
    }
}

void inmang(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

void xoa(int *array, int *size, int vitri) {
    if (vitri < 0 || vitri >= *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = vitri; i < *size - 1; i++) {
        *(array + i) = *(array + i + 1);
    }
    (*size)--;
}

int main() {
    int size, vitri;
    printf("Nhap mang co so luong phan tu la: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Mang khong cap phat duoc bo nho!");
        exit(1);
    }

    nhapmang(array, size);
    inmang(array, size);

    printf("Nhap vi tri ban muon xoa la: ");
    scanf("%d", &vitri);

    xoa(array, &size, vitri);
    inmang(array, size);

    free(array);

    return 0;
}

