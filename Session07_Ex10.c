#include <stdio.h>

int main() {
    int i, j, soPhanTu;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &soPhanTu);
    int mang[soPhanTu];
    for (i = 0; i < soPhanTu; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("Cac so nguyen to trong mang la: ");
    for (i = 0; i < soPhanTu; i++) {
        int so = mang[i];
        int check = 1;
        if (so < 2) {
            check = 0;
        } else {
            for (j = 2; j * j <= so; j++) {
                if (so % j == 0) {
                    check = 0;
                    break;
                }
            }
        }

        if (check) {
            printf("%d ", so);
        }
    }
    return 0;
}
