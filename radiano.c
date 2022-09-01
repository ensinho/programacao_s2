//Escreva um programa que converta um valor
//de ângulo dado em radianos para o valor correspondente expresso em graus, minutos e segundos.
//Sabe-se que 1 radiano equivale a 57.29578 graus. Escolha um formato de saída apropriado.

#include <stdio.h>
#include <math.h>

int main(){
    float grau,min, seg,rad;
    int minf, grauf;
    printf("Qual o valor do angulo, em radianos? ");
    scanf("%f", &rad);

    grau = rad*0.29578;
    grauf = rad*57;

    minf = grau*60;
    min = (grau*60) - minf;
    
    printf("%d Grau(s) // %d Minuto(s) // %.2f Segundo(s) ", grauf, minf, seg);
}