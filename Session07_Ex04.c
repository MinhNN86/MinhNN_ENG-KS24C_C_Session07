#include <stdio.h>
int main(){
    int i;
    printf("nhap vao so phan tu cua mang la: ");
    scanf("%d", &i);
    int mang[i];
    for (int dem = 0; dem < i; dem++){
        printf("mang[%d] = ", dem);
        scanf("%d", &mang[dem]);
    }
    return 0;
}