#include <stdio.h>

int main(){

    float tempCelsius;
    

    printf("Dimmi una temperatura: ");
    scanf("%f", &tempCelsius);


    if (tempCelsius < -273.15 ){ 
        printf("Errore questa temperatura non esiste \n");
    }

    else{
        printf("La temperatura in Fahreheit è: %f  \n", (9/5)*tempCelsius+32);
        printf("La temperatura in Kelvin è: %f  \n", tempCelsius + 273.15);
    }

    return 0;
}