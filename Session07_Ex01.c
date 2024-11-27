#include <stdio.h>
int main(){
    int i, doDaiMang, mang[] = {1,2,3,4,5};
    doDaiMang = sizeof(mang)/sizeof(int);
    for (i = 0; i < doDaiMang; i++){
        printf("%d\n", mang[i]);
    }
    printf("do dai mang la: %d", doDaiMang);
    return 0;
}