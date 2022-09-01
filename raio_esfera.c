// Escreva um programa que, dado o valor do raio via teclado, calcule e imprima o volume da esfera
//correspondente. Sabe-se que o volume da esfera é dado por 4/3πr3
//, onde r representa o raio da
//esfera. Note que a linguagem C não disponibiliza um operador de exponenciação (potenciação).
//Para calcular o valor de r
//3 podemos multiplicar o valor do raio por si mesmo duas vezes ou fazer
//uso da função pow da biblioteca padrão matemática (#include <math.h>).

#include <stdio.h>
#include <math.h>
int main(){

    float r;
    printf("Qual o raio da sua esfera? ");
    scanf("%f", &r );

    float v = ((4*3.14*(r*r*r)/3));
    printf("%g",v);

    return 0;
}