#include <stdio.h>

int main (){
    int x, y, hasil, jumlah;
    hasil = 0;
    jumlah = 0;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < x; i++){
        for(int j = i; j >= 0; j--){
            printf("(%d * %d)", j + 1, y);

            if (j > 0) {
                printf(" + "); }}
        hasil += (i + 1) * y;
        printf(" = %d\n", hasil);
        jumlah += hasil;}
    printf("%d", jumlah);
}
   