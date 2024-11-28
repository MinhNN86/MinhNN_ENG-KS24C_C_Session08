#include <stdio.h>
int main(){
    int row, col, demRow, demCol, phanTuMang, tongDuongCheoPhu = 0;
    printf("nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("nhap so cot cua mang: ");
    scanf("%d", &col);
    if (row != col){
        printf("khong phai ma tran vuong");
        return 1;
    }
    int mang2Chieu[row][col];
    for(demRow = 0; demRow < row; demRow++){
        for(demCol = 0; demCol < col; demCol++){
            printf("mang2Chieu[%d][%d]= ", demRow, demCol);
            scanf("%d", &mang2Chieu[demRow][demCol]);
        }
    }
    printf("cac phan tu tren duong cheo phu la: \n");
    for(demRow = 0; demRow < row; demRow++){
        phanTuMang = mang2Chieu[demRow][row - demRow - 1];
        printf("%d ", phanTuMang);
        tongDuongCheoPhu += phanTuMang;
    }
    printf("\nTong duong cheo phu la: %d", tongDuongCheoPhu);
    return 0;
}