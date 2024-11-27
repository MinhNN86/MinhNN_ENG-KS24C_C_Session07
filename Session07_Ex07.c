#include <stdio.h>
int main(){
    int dem, soPhanTuMang, phanTuMang;
    printf("nhap so phan tu mang: ");
    scanf("%d", &soPhanTuMang);
    int mang[soPhanTuMang];
    for (dem = 0; dem < soPhanTuMang; dem ++){
        printf("nhap phan tu thu %d la: ", dem +1);
        scanf("%d", &phanTuMang);
        while(phanTuMang % 2 == 0){
            printf("khong phai so le, hay nhap lai: ");
            scanf("%d", &phanTuMang);
        } 
    }
    return 0;   
}