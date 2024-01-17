#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("digita il primo numero: \n");
    scanf("%d", &a);
    printf("digita il secondo numero: \n");
    scanf("%d", &b);
    printf("digita il terzo numero: \n");
    scanf("%d", &c);
    if (a == b && b == c){
        printf("Il triangolo è equilatero \n");
    }
    else if((a == b && b != c) || (a == c && b !=c) || (b == c && c != a)){
        printf("Il triangolo è isocele \n");
    }
    else{}
    return 0;
}