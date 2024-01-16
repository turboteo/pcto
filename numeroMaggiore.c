#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Inserisci un numero: \n");
    scanf("%d", &a);

    printf("Inserisci un numero: \n");
    scanf("%d", &b);

    if(a < b){
        printf("il primo è minore del secondo \n");
    }

    else if(a > b){
        printf("il secondo è maggiore del primo \n");
    }

    else if( a = b ){
        printf("i due numeri sono uguali");
    }



    return 0;
}