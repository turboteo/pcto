#include <stdio.h>

int main()
{
    
    float num1;
    float num2;

    printf("Digita il primo numero: \n");
    scanf("%f", &num1);
    printf("Digita il secondo numero: \n");
    scanf("%f", &num2);

    char operatore;

    printf("Digita un operatore: \n");
    scanf(" %c", &operatore);

    if(operatore == '+'){
        printf("Il risultato è: %f \n", num1 + num2);
    }

    if(operatore == '-'){
        printf("Il risultato è: %f \n", num1 - num2);
    }

    if(operatore == '*'){
        printf("Il risultato è: %f \n", num1 * num2);
    }

    if(operatore == '/'){
        printf("Il risultato è: %f \n", num1 / num2);
    }


    
    return 0;
}