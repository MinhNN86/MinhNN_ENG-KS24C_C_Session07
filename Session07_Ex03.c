#include <stdio.h>
int main(){
    int i, check = 0, a[5] = {1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++){
        if(a[i] % 2 == 0){
            check = 1;
            printf("%d ", a[i]);
        }
    }
    if (check == 0){
        printf("mang khong chua so chan");
    }
    return 0;
}