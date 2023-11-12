#include<stdio.h>

int main(){
    int x, y, i, j;
    scanf ("%d %d", &x, &y);

    if (x < y) {
        for (i = x; j = y - 1; i++, j--) {
            printf("%d %d", i, y);
            y = y - 1;
            if (y < x || x == y && y > x) {
                break;
            } else {
                printf(" - ");
            } } }
    
    else {
        for (i = x; j = y + 1; j++, i--) {
            printf("%d %d", x, y);
            x = x - 1;
            y = y + 1;
            if (i == y) { 
                break;
            } else {
                printf(" - ");
            } } }
        

}