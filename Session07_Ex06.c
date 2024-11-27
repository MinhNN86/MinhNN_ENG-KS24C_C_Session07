#include <stdio.h>
int main(){
    int dem, mang[5] = {1,2,3,4,5};
    
    for (dem = 0; dem < 5; dem++){
        if (mang[dem] % 2 == 0){
            mang[dem] += 3;
        } else {
            mang[dem] += 2;
        }
    }
    for (dem = 0; dem < 5; dem++){
        printf("%d", mang[dem]);
    }
    return 0;
}