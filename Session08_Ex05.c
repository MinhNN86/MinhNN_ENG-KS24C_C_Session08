#include <stdio.h>
int main(){
    int row, col, demRow, demCol, tongRow = 0, tongCol = 0;
    printf("nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("nhap so cot cua mang: ");
    scanf("%d", &col);
    int mang2Chieu[row][col];
    for(demRow = 0; demRow < row; demRow++){
        for(demCol = 0; demCol < col; demCol++){
            printf("mang2Chieu[%d][%d]= ", demRow, demCol);
            scanf("%d", &mang2Chieu[demRow][demCol]);
        }
    }
    // tinh cot cuoi va cot dau
    for(demRow = 0; demRow < row; demRow++){
        tongCol += mang2Chieu[demRow][0] + mang2Chieu[demRow][col - 1];
    }
    // tinh hang cuoi va hang dau
    for(demCol = 1; demCol < col - 1; demCol++){
        tongRow += mang2Chieu[0][demCol] + mang2Chieu[row - 1][demCol];
    }
    printf("tong cac phan tu tren duong bien cua ma tran: %d\n", tongCol + tongRow);
    return 0;
}
