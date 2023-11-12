#include<stdio.h>

int main(){
    int x;
    char y;
    scanf("%d %c", &x, &y);
    for(int i = 1; i <= 50; i++){
         if (i % x == 0){
            printf("%c ", y);
         }else{
            printf("%d ", i);
         }
         
}    
}