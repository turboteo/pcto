#include <stdio.h>

int main(){

    float n1;
    float n2;
    float n3;

    printf("Digita il primo lato: \n");
    scanf("%f", &n1);

    printf("Digita il secondo lato: \n");
    scanf("%f", &n2);

    printf("Digita il terzo lato: \n");
    scanf("%f", &n3);

    printf("Ora ti dirò se questo è un triangolo \n");

    if(n1 + n2 > n3){

        if(n2 + n3 > n1){
          }
        else {
            printf("I lati non formano un triangolo \n");
        }
        
            if(n3 + n1 > n2){
                printf("I lati formano un triangolo \n");
            }

            else {
                printf("I lati non formano un triangolo \n");
            }
      
    }

    else{
        printf("I lati non formano un triangolo \n");
    }

    


}
