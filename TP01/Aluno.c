/* As filas são estruturas de dados do tipo FIFO (*first-in first-out*), onde o primeiro elemento a ser inserido, será o primeiro a ser retirado,
 ou seja, adiciona-se itens no fim e remove-se do início. Nessa tarefa de programação, você deverá implementar uma fila de alunos. Cada aluno
é um TAD (Tipo Abstrato de Dados) que possui os seguintes campos: `matricula` (que deve reber um valor inteiro maior ou igual a zero), `nome` 
(que deve receber uma string de tamanho máximo 50) e `curso` (que deve receber uma string de tamanho máximo 30). A `struct` do TAD `Fila` deve 
possuir um campo vetor de ponteiros para o tipo `Aluno` (`fila_alunos`), onde alunos serão armazenados. Os arquivos de cabeçalho `Aluno.h` e `Fila.h` 
descrevem o contrato dos seus respectivos TADs (`Aluno` e `Fila`) e o aquivo `TestaFila.c` provê uma bateria de testes para avaliar a sua implementação 
desses TADs. 

**OBS1** *Os TADs* `Aluno` *e* `Fila` *devem ser implementados em arquivos separados com os nomes* `Aluno.c` *e* `Fila.c`.

**OBS2** *Lembre-se que vetores possuem tamanho fixo e, por esse motivo, pode haver a necessidade de realocação de memória caso o número de alunos exceda 
o tamanho inicial do vetor. Dica! use a função* `realloc()` *para isso.*.

**OBS3**: *Comandos para compilação em separado dos módulos do programa via linha de comando*: */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Aluno.h"

struct aluno {
    int matricula;
    char nome[50];
    char curso[30];
};

typedef struct aluno Aluno;

/* Aloca e retorna um aluno com os dados passados por parâmetro. Porém, para os
 * casos em que (i) pelo menos um dos parâmetros sejam nulos <-1, NULL, NULL>; e
 * (ii) o tamanho das strings nome e curso sejam maiores que os da especificação
 * (50 e 30, respectivamente), a função deve retornar NULL. */
Aluno *alu_novo(int matricula, char *nome, char *curso) {
Aluno *a;

    if (matricula < 0 || nome == NULL || curso == NULL ){
            return NULL;
        }

    a = (Aluno*) malloc(sizeof(Aluno));
    a -> matricula = matricula;
    strcpy( a-> nome, nome);
    strcpy( a-> curso, curso);

    return a;
} 

/* Libera a memória de um aluno previamente criado e atribui NULL ao aluno. */
void alu_libera(Aluno **aluno) {
    free(*aluno);
    *aluno = NULL;
}

/* Copia os valores de um aluno para as referências informadas. Em caso de aluno
 * NULL, atribuir valor padrão <-1, "NULL", "NULL"> aos parâmetros. */
void alu_acessa(Aluno *aluno, int *matricula, char *nome, char *curso){

        if (aluno == NULL){
            aluno -> matricula = -1;
            strcpy( aluno -> nome, "NULL");
            strcpy( aluno -> curso, "NULL");
            
        }      

        else{

        *matricula = aluno->matricula;
        strcpy(nome, aluno->nome);
        strcpy(curso,aluno-> curso);
         
        /* *matricula = aluno->matricula; 
        *nome = aluno->nome;
        *curso = aluno->curso; */
    }
   
}

/* Atribui novos valores aos campos de um aluno. Porém, para os casos em que (i)
 * algum dos parâmetros sejam nulos <NULL, -1, NULL, NULL>; ou (ii) o tamanho
 * das strings nome e curso sejam maiores que os da especificação (50 e 30,
 * respectivamente), a função não deve fazer a atribuição. */
void alu_atribui(Aluno *aluno, int matricula, char *nome, char *curso){
    aluno -> matricula = matricula;
    *aluno -> nome = nome;
    *aluno -> curso = curso;
}

/* Avalia se dois alunos são iguas. A função deve retornar 1 se os alunos
 * possuem os mesmos dados, 0 caso os dados dos alunos possuam alguma diferença
 * e -1 caso pelo menos um dos alunos seja NULL.
 */
int alu_igual(Aluno *aluno1, Aluno *aluno2) {
    if (aluno1 == NULL || aluno2 == NULL ){
        return -1;
    }
    else if (aluno1 == aluno2){
        return 1;
    }
    else if (aluno1 != aluno2){
        return 0;
    }

}

/* Retorna o tamanho em bytes do TAD aluno. */
int alu_tamanho() {
    int i = sizeof(Aluno);
    return i;
}