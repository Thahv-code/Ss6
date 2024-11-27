#include <stdio.h>

int main() {
    int so[5];
    int n = 0;
    printf("nhap vao nam so nguyen: \n");
    for (int i = 0; i < 5; i++) {
        printf("so thu %d: ", i + 1);
        scanf("%d", &so[i]);
        if (so[i] % 2 != 0) {
           n += so[i];
        }
    }
    printf("tong cua cac so le da nhap la : %d",n);
    return 0;
}
