#include <stdio.h>
#include <string.h>

void daonguocstring(char *chuoi, char *ketqua) {
    int len = strlen(chuoi);
    char *dau = chuoi + len - 1;
    char *cuoi = ketqua;

    for (int i = 0; i < len; i++) {
        *cuoi = *dau;
        dau--;
        cuoi++;
    }
    *cuoi = '\0';
}

int main() {
    char chuoi[100];
    char daonguoc[100];

    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0'; 

    daonguocstring(chuoi, daonguoc);

    printf("Chuoi da nhap: %s\n", chuoi);
    printf("Chuoi dao nguoc: %s\n", daonguoc);

    return 0;
}

