#include<stdio.h>

int main(){
    int x;
    float y, z;
    while (x != 5) {
    printf("pilih program : \n");
    printf("1. penjumlahan \n");
    printf("2. pengurangan \n");
    printf("3. perkalian \n");
    printf("4. pembagian \n");
    printf("5. exit \n");
    printf("masukkan pilihan : ");
    scanf("%d", &x);

    if (x == 5){
        printf("terimakasih telah menggunakan kalkulator alya");
        break;
    } else if (x > 5 || x <= 0){
        printf("input anda salah, silahkan coba lagi\n\n");
        continue;
    } else {
        printf("masukkan nilai pertama : "); 
        scanf("%f", &y);
        printf("masukkan nilai kedua : ");
        scanf("%f", &z);
        if (x == 1) {
            float hasil_1 = y + z;
            printf("hasil penjumlahan antara: %.2f dengan %.2f adalah %.2f\n\n", y, z, hasil_1);
        }else if (x == 2){
            float hasil_2 = y - z;
            printf("hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", y, z, hasil_2);
        } else if (x == 3){
            float hasil_3 = y * z;
            printf("hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", y, z, hasil_3);
        } else if (x == 4){
            float hasil_4 = y / z;
            printf("hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", y, z, hasil_4);
        } 
    }
    }
}