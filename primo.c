//Considerando a função que determina se um número é ou não primo, escreva um programa para:
//int primo(int n) {
//if (n == 2) {
//return 1;
//} else if (n<2 || (n%2)== 0) {
//return 0;
//} else {
//int lim = (int) sqrt(n);
//for (int i=3; i<= lim; i+=2) {
//if (n% i == 0) {
//return 0;
//}
//} //return 1;
//}
//}
//a) Imprimir todos os números primos menores que um valor x, fornecido via teclado.
//b) Imprimir os primeiros n números primos, onde n é fornecido via teclado.

#include <stdio.h>
#include <math.h>

int primo(int n);

// item (a)
int main(){
    int x,i,result,n,c,resultado;

   // printf("Digite o o valor para limite: ");
    //scanf("%d", &x);

    //for (i=1;i <= x; i++){
     //   result = primo(i);
     //   if (result == 1){
     //       printf("Numero(s) primo(s): %d \n", i);
     //   }
        
  //  }
   // return 0;


// item (b)
    printf("Digite o o valor para limite: ");
    scanf("%d", &n);

    while(n != 0){
        resultado = primo(c);
        if (resultado == 1){
            c = c +1;
            printf("Numero(s) primo(s):%d\n", c);
            
        }
        
    }

}

int primo(int n) {
 if (n == 2) {
    return 1;
 }
  else if (n<2 || (n%2)== 0) {
    return 0;
} 
    else {
        int lim = (int) sqrt(n);
        for (int i=3; i<= lim; i+=2) {
            if (n% i == 0) {
                return 0;
            }
        }
        return 1;
    }
}