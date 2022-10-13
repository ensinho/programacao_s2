/* TAD: Aluno (matricula, nome, curso) */
typedef struct aluno Aluno;

/* Aloca e retorna um aluno com os dados passados por parâmetro. Porém, para os
 * casos em que (i) pelo menos um dos parâmetros sejam nulos <-1, NULL, NULL>; e
 * (ii) o tamanho das strings nome e curso sejam maiores que os da especificação
 * (50 e 30, respectivamente), a função deve retornar NULL. */
Aluno *alu_novo(int matricula, char *nome, char *curso);

/* Libera a memória de um aluno previamente criado e atribui NULL ao aluno. */
void alu_libera(Aluno **aluno);

/* Copia os valores de um aluno para as referências informadas. Em caso de aluno
 * NULL, atribuir valor padrão <-1, "NULL", "NULL"> aos parâmetros. */
void alu_acessa(Aluno *aluno, int *matricula, char *nome, char *curso);

/* Atribui novos valores aos campos de um aluno. Porém, para os casos em que (i)
 * algum dos parâmetros sejam nulos <NULL, -1, NULL, NULL>; ou (ii) o tamanho
 * das strings nome e curso sejam maiores que os da especificação (50 e 30,
 * respectivamente), a função não deve fazer a atribuição. */
void alu_atribui(Aluno *aluno, int matricula, char *nome, char *curso);

/* Avalia se dois alunos são iguas. A função deve retornar 1 se os alunos
 * possuem os mesmos dados, 0 caso os dados dos alunos possuam alguma diferença
 * e -1 caso pelo menos um dos alunos seja NULL.
 */
int alu_igual(Aluno *aluno1, Aluno *aluno2);

/* Retorna o tamanho em bytes do TAD aluno. */
int alu_tamanho();