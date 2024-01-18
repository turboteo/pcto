#include <stdio.h>

void carattere(char input){
    

    if (input == 97 || input == 65 || input == 101 || input == 69 || input == 73 || input == 105 || input == 79 || input == 111 || input == 85 || input == 117){
        printf("Il carattere digitato è una vocale \n");
    }
    else if((input <= 64) || (input >= 123)){
        printf("Non hai digitato una lettera \n");
    }
    else if((input <= 64) || (input >= 123)){
        printf("Non hai digitato una lettera \n");
    }
    else{
        printf("Il carattere è una consonante \n");
    }
}

int main(){
    char input;

    printf("Digita un carattere: ");
    scanf("%c", &input);
    carattere(input);
    return 0;
}