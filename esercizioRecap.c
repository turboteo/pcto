#include <stdio.h>

int radice(float numero) {
    float temp;
    float sqrt;

    sqrt = numero / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( numero/temp + temp) / 2;
    }
    return (sqrt);
}

void delta(float a,float b,float c){
    float risultato1;
    float risultato2;
    float delta = ((b*b)-4*a*c);

    if(delta >= 0){
        risultato1 = (-b + radice(delta)) /( 2*a); 
        risultato2 = (-b - radice(delta)) /( 2*a); 
        if (delta> 0){
            printf("Le soluzioni sono %f e %f \n", risultato1, risultato2);
        }
        else{
            ("Le soluzioni sono %f e %f \n", risultato1);
        }
    }
    else{
        printf("ERRORE: delta negativo \n");
    }
}

int main() {
    float a;
    float b;
    float c;

    printf("Inserire ax^2: ");
    scanf("%f", &a);
    printf("Inserire bx: ");
    scanf("%f", &b);
    printf("Inserire c: ");
    scanf("%f", &c);
    delta(a, b, c);
    return 0;
}