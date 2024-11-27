#include <stdio.h>

int main() {
    int n;
    int i = 0,chan = 0,le = 0;
    while (i!=5){
        printf("hay nhap mot so bat ky : ");
        scanf("%d",&n);
        if(n % 2 == 0){
            chan ++;
        }else{
            le++;
        }
        i++;
    }
    printf("co %d so le\nco %d so chan\n", le ,chan);
    return 0;
}