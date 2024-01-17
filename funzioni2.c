#include <stdio.h>

void calcolaCubo() {
    int numero;
    int cubo;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    cubo = numero * numero * numero;
    printf("Il cubo di %d è %d \n", numero, cubo);
}

int main() {
    int i = 0;

    while(i < 4) {
        calcolaCubo();
        i ++ 1;
    }
    return 0;
}