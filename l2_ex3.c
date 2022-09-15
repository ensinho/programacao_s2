#include <stdio.h>

int mdc(x,y);

int main(){
    int x,y,z;

    printf("Digite 3 numeros para o MDC: ");
    scanf("%d %d %d", &x, &y, &z);

    int resultado = mdc(x,y);
    int resultado2 = mdc (resultado, z);

    printf("O MDC final e: %d ", resultado2);
    
    return 0;
}

int mdc(x,y){
    int resto;
    while (y != 0 ){
        resto = x%y;
        x = y;
        y = resto;
    
    }
return x;
}