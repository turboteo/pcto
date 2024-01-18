#include <stdio.h>
void operazione(float num1, float num2, char operatore){

    if(operatore == '+'){
        printf("Il risultato è: %f \n", num1 + num2);
    }
    else if(operatore == '-'){
        printf("Il risultato è: %f \n", num1 - num2);
    }
    else if(operatore == '*'){
        printf("Il risultato è: %f \n", num1 * num2);
    }
    else if(operatore == '/'){
        printf("Il risultato è: %f \n", num1 / num2);
    }
    else{
        printf("Non hai digitato un operatore valido \n");
    }
}

int main()
{
    float num1;
    float num2;
    char operatore;

    printf("Digita il primo numero: \n");
    scanf("%f", &num1);
    printf("Digita il secondo numero: \n");
    scanf("%f", &num2);
    printf("Digita un operatore: (+, -, *, /) \n");
    scanf(" %c", &operatore);
    operazione(num1, num2, operatore);
    
    
    
    
    return 0;
}