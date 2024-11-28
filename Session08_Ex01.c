#include <stdio.h>
int main(){
    int i, mang[] = {1, 2, 3, 4, 5};

    for (i = (sizeof(mang)/sizeof(mang[0])) - 1; i >= 0; i--){
        printf("%d ", mang[i]);
    }
    return 0;
}