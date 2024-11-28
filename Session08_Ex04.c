#include <stdio.h>
int main(){
    int row, col;
    printf("nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("nhap so cot cua mang: ");
    scanf("%d", &col);
    int mang2Chieu[row][col];
    for(int demRow = 0; demRow < row; demRow++){
        for(int demCol = 0; demCol < col; demCol++){
            printf("mang2Chieu[%d][%d]= ", demRow, demCol);
            scanf("%d", &mang2Chieu[demRow][demCol]);
        }
    }
    int max = mang2Chieu[0][0];
    for(int demRow = 0; demRow < row; demRow++){
        for(int demCol = 0; demCol < col; demCol++){
            if (max < mang2Chieu[demRow][demCol]){
                max = mang2Chieu[demRow][demCol];
            }
        }
    }
    printf("phan tu lon nhat trong ban la: %d", max);
    return 0;
}