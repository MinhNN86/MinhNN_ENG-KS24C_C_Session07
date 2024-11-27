#include <stdio.h>
int main(){
    int dem, min, max, mang[5] = {5, 3, 6, 7, 2};
    min = mang[0];
    max = mang[0];
    for(dem = 0; dem < 5; dem ++){
        if(min > mang[dem]){
            min = mang[dem];
        }
    }
    for(dem = 0; dem < 5; dem ++){
        if(max < mang[dem]){
            max = mang[dem];
        }
    }
    printf("phan tu lon nhat la: %d\r\n", max);
    printf("phan tu nho nhat la: %d", min);
    return 0;
}