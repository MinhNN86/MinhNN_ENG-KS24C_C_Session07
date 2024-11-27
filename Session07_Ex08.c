#include <stdio.h>
int main(){
    int row, col, phanTuMang;
    printf("hay nhap so hang so cot cua mang 2 chieu: ");
    scanf("%d %d", &row, &col);
    int mang[row][col];
    for(int demRow = 0; demRow < row; demRow++){
        for(int demCol = 0; demCol < col; demCol++){
            printf("mang[%d][%d]= ", demRow, demCol);
            scanf("%d", &mang[demRow][demCol]);
        }
    }

    printf("Mang 2 chieu da nhap:\n");
    for (int demRow = 0; demRow < row; demRow++) {
        for (int demCol = 0; demCol < col; demCol++) {
            printf("%d ", mang[demRow][demCol]);
        }
        printf("\n");
    }
    return 0;
}