#include <stdio.h>
int main(){
    int n, demRow, demCol;

    printf("nhap so nguyen: ");
    scanf("%d", &n);
    int mang2Chieu[n][n];
    for (demRow = 0; demRow < n; demRow++){
        for(demCol = 0; demCol < n; demCol++){
            printf("nhap phan tu mang2Chieu[%d][%d]: ", demRow, demCol);
            scanf("%d", &mang2Chieu[demRow][demCol]);
        }
    }
    for (demRow = 0; demRow < n; demRow++){
        for(demCol = 0; demCol < n; demCol++){
            printf("%d ", mang2Chieu[demRow][demCol]);
        }
        printf("\n");
    }
    return 0;
}