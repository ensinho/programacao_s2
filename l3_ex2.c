/*Faça um programa que determina o máximo e o mínimo de um conjunto de 𝑛 números inteiros
armazenados num vetor 𝑎 de 10 elementos. Faça duas funções, uma que retorna o máximo e outra
que retorne o mínimo.*/

#include<stdio.h>

int maior();
int menor();
int a[10];

int main(){
    
    int maximo,minimo;

    for (int i=0; i<10;i++){
        printf("Digite um elemento para o vetor a: ");
        scanf("%d", &a[i]);
        
    }
        maximo = maior(*a);
        printf(" - %d - ", maximo);

        minimo = menor(*a);
        printf(" - %d - ",minimo);
}

int maior(){
    int maior_valor = a[0];
    for (int i=0; i<10;i++){
        if(a[i]>maior_valor){
            maior_valor = a[i];
        }
    }
    return maior_valor;
}

int menor(){
    int menor_valor = a[0];
    for (int i=0; i<10;i++){
        if(a[i]<menor_valor){
            menor_valor = a[i];
        }
    }
    return menor_valor;
}
