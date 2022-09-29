/* TAD: Ponto (x,y) */
/* Tipo exportado */
typedef struct ponto Ponto;

/* Funções exportadas */

/* Aloca e retorna um ponto com coordenadas (x,y) */
Ponto* pto_cria(float x, float y);

/* Libera a memória de um ponto previamente criado */
void pto_libera(Ponto* p);

/* Copia valores os das coordenadas de um ponto para x e y*/
void pto_acessa (Ponto* p, float* x, float* y);

/* Atribui novos valores às coordenadas de um ponto */
void pto_atribui(Ponto* p, float x, float y);

/* Retorna a distância entre dois pontos */
float pto_distancia(Ponto* p1, Ponto* p2);
