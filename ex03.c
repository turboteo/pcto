#include <stdio.h>

int main(){ 
    int somma = 0;

    for (int i = 2; i <= 100; i += 2 ) {
        somma += i;
    
    }
    printf("%d \n", somma);
    return 0;
}