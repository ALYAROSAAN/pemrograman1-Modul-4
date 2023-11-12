#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    for(int i = 1; i < x; i++) {
         if( i % 2 == 1) {
            printf("%d ", i);
        }
    }printf("\n");
    for(int i = x; i >=1; i--) {
         if(i % 2 == 0){
            printf("%d ", i);
         }
    }
}