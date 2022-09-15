//Dado dois vetores, 𝑎 (5 elementos) e 𝑏 (8 elementos), faça um programa em C que imprima todos
//os elementos comuns aos dois vetores.

#include <stdio.h>

int main(){
    int a[5];
    int b[8];
    int i,j;
    for (int i=0; i<5;i++){
        printf("Digite um elemento para o vetor a: ");
        scanf("%d", &a[i]);
        
    }

    for (int j=0; j<8;j++){
        printf("Digite um elemento para o vetor b: ");
        scanf("%d", &b[j]);
    }
    
    for ( i=0; i<5;i++){
        for (j=0; j<8;j++){
            if (a[i] == b[j]){
                printf("%d" , a[i]);
            }
        }
    }
}