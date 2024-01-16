#include <stdio.h>

int main(){

    int n1;
    int n2;

    printf("Dimmi il primo numero: ");
    scanf("%d", &n1);

    printf("Dimmi il secondo numero: ");
    scanf("%d", &n2);

    if (n1 % n2 == 0){ // la percentuale è il simbolo aritmetico del resto della divisione
        printf("I due numeri sono uno il multiplo dell'altro \n");
    }

    else{
        printf("I due numeri NON sono uno il multiplo dell'altro\n");
    }

    return 0;
}