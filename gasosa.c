// Escreva um programa que calcule o preço da gasolina por litro no Brasil se aqui fosse adotado o
//mesmo preço cobrado nos Estados Unidos. O programa deve capturar dois valores fornecidos via
//teclado: o preço do galão de gasolina praticado nos Estados Unidos (em dólares) e a taxa de
//conversão do dólar para o real. O programa então deve exibir o preço do litro de gasolina
//correspondente em reais. Sabe-se que um galão tem 3.7854 litros.

#include <stdio.h>
#include <math.h>

int main(){

    float galao, taxa, br, final;
    printf("Qual o preco do galao de gasolina, em dolares? ");
    scanf("%f", &galao);

    printf("Qual o preco do dolar? "); 
    scanf("%f", &taxa);
    
    br = taxa*galao;

    final = br/3.7854;

    printf("%f", final);

}