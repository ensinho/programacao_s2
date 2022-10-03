/* Escreva um programa para fazer o cálculo das raízes quadradas de uma equação do segundo grau
(𝑎𝑥2 + 𝑏𝑥 +𝑐). Os valores dos coeficientes (𝑎, 𝑏, 𝑐 reais) devem ser fornecidos via teclado. O valor
do coeficiente 𝑎 deve ser diferente de zero. O valor do delta (∆= 𝑏2 − 4𝑎𝑐) deve ser calculado em
uma função separada, double delta(double a, double b, double c), e impresso na principal (𝑚𝑎𝑖𝑛).
Caso ∆= 0 então 𝑥′ = 𝑥′′ = −𝑏/2𝑎. Caso ∆ > 0 então 𝑥′ = −𝑏 − √𝑏2−4𝑎𝑐/2𝑎 e 𝑥′′ = −𝑏 + √𝑏2−4𝑎𝑐/2𝑎. Caso
contrário, se ∆ < 0 não existe raiz real para essa equação. Escreva uma função que calcula as raízes
da equação. A função deve retornar o número de raízes reais existentes e preencher os endereços
passados com os valores das raízes correspondentes, seguindo o protótipo:
int raizes(double a, double b, double c, double *px1, double *px2). A quantidade de raízes e seus
valores devem ser mostrados na tela. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double delta(double a, double b,double  c);

int main(){

    double a,b,c;
    printf("Digite os Valore do Coeficiente A: ");
    scanf("%lf", &a); 
    printf("Digite os Valore do Coeficiente B: ");
    scanf("%lf", &b);
    printf("Digite os Valore do Coeficiente C: ");
    scanf("%lf", &c);
    double result;
    result = delta(a, b, c);
    printf("O Delta e: %.2lf\n", result);

    double r1,r2;
    if (result == 0.0 ){
        r1 = r2 = ( -b / (2*a) );
        printf("Existem Duas raizes iguais, valendo: %.2lf.", &r1);
    }

    else if (result > 0.0 ){
        r1 = ((-b - sqrt(result))/2*a);
        r2 = ((-b + sqrt(result))/2*a);
        printf("Existem duas raizes diferentes, sendo R1: %.2lf e R2: %.2lf. ", r1,r2);
    }
    return 0;
}

double delta(double a , double b, double c){
    double delt;
    delt = ((b*b) - 4*a*c);
    return delt;
}
