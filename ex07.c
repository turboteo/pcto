#include <stdio.h>

int main(){

    int n1;
    int n2;
    int n3;

    printf("Digita il primo numero: ");
    scanf("%d", &n1);

    printf("Digita il secondo numero: ");
    scanf("%d", &n2);

    printf("Digita il secondo numero: ");
    scanf("%d", &n3);

    if (n1 - n2 == n2 - n3){
        printf("I numeri sono in progressione aritmetica costante \n");
    }

    else{
        printf("I numeri non sono in progressione costante \n");
    }




}