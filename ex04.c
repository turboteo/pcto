#include <stdio.h>

int main(){
    int etaPerGuidare;
    int etaTua;

    printf("A che età si può guidare nel tuo stato? \n");
    scanf("%d", &etaPerGuidare);
    printf("e tu quanti anni hai? \n");
    scanf("%d", &etaTua);
    if (etaTua >= etaPerGuidare){
        printf("Puoi guidare nel tuo stato \n");
    }
    else{
        printf("Non puoi guidare nel tuo stato \n");
    }
    return 0;
}