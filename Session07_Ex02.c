#include <stdio.h>
int main(){
    int i, mang[5];
    for (i = 0; i < 5; i++){
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("mang vua nhap la: ");
    for (i = 0; i < 5; i++){
        printf("%d ", mang[i]);
    }
    return 0;
}