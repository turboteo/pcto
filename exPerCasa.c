#include <stdio.h>

int main(){
    int annoNascita;

    printf("Dimmi in che anno sei nato \n");
    scanf("%d", &annoNascita);
    if (annoNascita == 1969){
        printf("Sei nato nello stesso anno in cui l'uomo è andato sulla luna \n");
    }
    else if(annoNascita < 1969){
        printf("Sei nato %d anni prima che l'uomo andasse sulla Luna \n", 1969-annoNascita);
    }
    else if(annoNascita > 1969){
        printf("Sei nato %d anni dopo che l'uomo è atterrato sulla Luna \n", annoNascita-1969);
    }
    return 0;
}
