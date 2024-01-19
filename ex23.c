#include <stdio.h>

void prova(int *x, int *y){
    int i;

    i = *x;
    *x = *y;
    *y = i;  
;}

int main(){
    int x = 5;
    int y = 7;

    prova(&x, &y);
    printf("x: %d \n y: %d \n", x,y);
    return 0;
}