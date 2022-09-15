/*As fórmulas para o cálculo do volume e da área de uma esfera são: 𝑉 =
4
3
𝜋𝑟
3 e 𝐴 = 4𝜋𝑟
2
.
Escreva as funções para calcular o volume e a área de uma esfera. (Dica: defina 𝜋 como uma
constante #define Pi 3.14)*/

#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(){

    float r,vol,area;
    printf("Escreva o raio: ");
    scanf("%f",&r);

    vol = (4.0*pi*(r*r*r))/3.0;

    area = (4.0*pi*(r*r));


    printf(" - %f - ",vol);
    printf("- %f -", area);

    
}