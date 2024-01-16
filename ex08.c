#include <stdio.h>

int main(){

    int anno;
    

    printf("Digita un anno: ");
    scanf("%d", &anno);

    if (anno % 4 == 0){
        if(anno % 100 != 0){
            printf("L'anno è bisestile \n");
        } //negazione della condizione

        else if(anno % 400 == 0){
            printf("L'anno è bisestile \n");
        }

        else{
            printf("L'anno non è bisestile \n");
        }
    }
    else{
        printf("L'anno non è bisestile \n");
    }

}
