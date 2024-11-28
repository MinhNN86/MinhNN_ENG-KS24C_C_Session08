#include <stdio.h>
int main() {
    int mang[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(mang) / sizeof(mang[0]);
    int max = 0;
    int phanTuMax = mang[0];
    for (int i = 0; i < n; i++) {
        int dem = 0;

        for (int j = 0; j < n; j++) {
            if (mang[i] == mang[j]) {
                dem++;
            }
        }
        if (dem > max) {
            max = dem;
            phanTuMax = mang[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat: %d", phanTuMax);
    return 0;
}
