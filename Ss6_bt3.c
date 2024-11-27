#include <stdio.h>

int main() {
    int num = 2302;
    int a;
    while ( num == 2302 ){
        printf("hay nhap mat khau: ");
        scanf("%d", &a);
        if(a == 2302){
            printf("ping pong\n");
            break;

        }else if (a > 2302){
            printf("hoi non\n");
        }else{
            printf("kem coi vay\n");
        }
    }
    return 0;
}