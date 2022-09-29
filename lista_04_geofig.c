#include <stdio.h>
#include "ponto.h"

int main(){
    Ponto p;

    printf(" Digite o x :");
    scanf("%f", &p.x);

    printf(" Digite o y:");
    scanf("%f", &p.y);
    Ponto* a;

    a = pto_cria();
}
struct ponto {
    float x;
    float y;
};
 
Ponto* pto_cria(){

    Ponto p;
    Ponto* v;
    float x,y;

    v = (Ponto*) malloc(2*sizeof(Ponto));


    if (v == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    v->x = x;
    v->y = y;
    for(int i = 0; i < 2; i++) {
        printf ("%f" , v[i]);
    }
    return v;
}
