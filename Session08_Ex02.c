#include <stdio.h>
int main(){
    int i, timPhanTu, check = 0, mang[] = {1, 2, 3, 4, 5};

    printf("nhap phan tu bat ky de tim trong mang: ");
    scanf("%d", &timPhanTu);
    for(i = 0; i < sizeof(mang)/ sizeof(mang[0]); i++){
        if(timPhanTu == mang[i]){
            printf("vi tri phan tu trong mang la mang[%d] = %d", i, timPhanTu);
            check = 1;
            break;
        }
    }
    if(check == 0){
        printf("phan tu khong ton tai trong mang");
    }
    return 0;
}