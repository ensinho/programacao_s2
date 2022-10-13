#include "Fila.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float teste_aluno_novo_com_dados_validos() {
  char nome[50];
  char curso[30];
  float pontuacao = 0;

  Aluno *aluno = alu_novo(1, "Abraão", "Computação");

  if (aluno != NULL) {
    printf("[Passou 1.50] - Teste da função alu_novo() com dados válidos!\n");
    pontuacao = 1.5;
  } else {
    printf("[Falhou 0.00] - Teste da função alu_novo() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_aluno_novo_com_dados_invalidos() {
  char nome[55] = "N";
  char curso[35] = "C";
  float pontuacao = 0;

  for (int i = 0; i < 53; i++) {
    strcat(nome, "N");
  }

  for (int i = 0; i < 33; i++) {
    strcat(curso, "C");
  }

  Aluno *aluno = alu_novo(-1, nome, curso);
  if (aluno == NULL) {
    printf("[Passou 1.00] - Teste da função alu_novo() com dados inválidos!\n");
    pontuacao = 1;
  } else {
    printf("[Falhou 0.00] - Teste da função alu_novo() com dados inválidos!\n");
  }
  return pontuacao;
}

float teste_aluno_novo_com_dados_nulos() {
  float pontuacao = 0;

  Aluno *aluno = alu_novo(-1, NULL, NULL);
  if (aluno == NULL) {
    printf("[Passou 0.67] - Teste da função alu_novo() com dados nulos!\n");
    pontuacao = 0.67;
  } else {
    printf("[Falhou 0.00] - Teste da função alu_novo() com dados nulos!\n");
  }
  return pontuacao;
}

float teste_aluno_acessa_com_dados_validos() {
  int matricula;
  char nome[50];
  char curso[30];
  float pontuacao = 0;

  Aluno *aluno = alu_novo(1, "Abraão", "Computação");
  if (aluno != NULL) {
    alu_acessa(aluno, &matricula, nome, curso);
    if (matricula == 1 && strcmp(nome, "Abraão") == 0 &&
        strcmp(curso, "Computação") == 0) {
      printf(
          "[Passou 1.50] - Teste da função alu_acessa() com dados válidos!\n");
      pontuacao = 1.5;
    } else {
      printf(
          "[Falhou 0.00] - Teste da função alu_acessa()com dados válidos!\n");
    }
  } else {
    printf("[Falhou 0.00] - Teste da função alu_acessa() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_aluno_atribui_com_dados_validos() {
  int matricula;
  char nome[50];
  char curso[30];
  float pontuacao = 0;

  Aluno *aluno = alu_novo(1, "Abraão", "Computação");
  if (aluno != NULL) {
    alu_atribui(aluno, 2, "Jacó", "Sistemas de Informação");
    alu_acessa(aluno, &matricula, nome, curso);
    if (matricula == 2 && strcmp(nome, "Jacó") == 0 &&
        strcmp(curso, "Sistemas de Informação") == 0) {
      printf(
          "[Passou 1.50] - Teste da função alu_atribui() com dados válidos!\n");
      pontuacao = 1.5;
    } else {
      printf(
          "[Falhou 0.00] - Teste da função alu_atribui() com dados válidos!\n");
    }
  } else {
    printf(
        "[Falhou 0.00] - Teste da função alu_atribui() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_aluno_atribui_com_dados_invalidos() {
  int matricula;
  char nome[55] = "N";
  char curso[35] = "C";
  float pontuacao = 0;

  for (int i = 0; i < 53; i++) {
    strcat(nome, "N");
  }

  for (int i = 0; i < 33; i++) {
    strcat(curso, "C");
  }

  Aluno *aluno = alu_novo(1, "Abraão", "Computação");
  if (aluno != NULL) {
    alu_atribui(aluno, 2, nome, curso);
    alu_acessa(aluno, &matricula, nome, curso);
    if (matricula == 1 || strcmp(nome, "Abraão") == 0 ||
        strcmp(curso, "Computação") == 0) {
      printf("[Passou 1.00] - Teste da função alu_atribui() com dados "
             "inválidos!\n");
      pontuacao = 1;
    } else {
      printf("[Falhou 0.00] - Teste da função alu_atribui() com dados "
             "inválidos!\n");
    }
  } else {
    printf(
        "[Falhou 0.00] - Teste da função alu_atribui() com dados inválidos!\n");
  }
  return pontuacao;
}

float teste_aluno_atribui_com_dados_nulos() {
  int matricula;
  char nome[50];
  char curso[30];
  float pontuacao = 0;

  Aluno *aluno = alu_novo(1, "Abraão", "Computação");
  if (aluno != NULL) {
    alu_atribui(NULL, -1, NULL, NULL);
    alu_acessa(aluno, &matricula, nome, curso);
    if (matricula == 1 && strcmp(nome, "Abraão") == 0 &&
        strcmp(curso, "Computação") == 0) {
      printf(
          "[Passou 0.67] - Teste da função alu_atribui() com dados nulos!\n");
      pontuacao = 0.67;
    } else {
      printf(
          "[Falhou 0.00] - Teste da função alu_atribui() com dados nulos!\n");
    }
  } else {
    printf("[Falhou 0.00] - Teste da função alu_atribui() com dados nulos!\n");
  }
  return pontuacao;
}

float teste_aluno_libera_com_dados_validos() {
  int matricula;
  char nome[50];
  char curso[30];
  float pontuacao = 0;

  Aluno *aluno = alu_novo(1, "Abraão", "Computação");
  alu_libera(&aluno);
  if (aluno != NULL) {
    printf("[Falhou 0.00] - Teste da função alu_libera() com dados válidos!\n");
    pontuacao = 0.0;
  } else {
    printf("[Passou 1.50] - Teste da função alu_libera() com dados válidos!\n");
    pontuacao = 1.5;
  }
  return pontuacao;
}

float teste_aluno_libera_com_dados_nulos() {
  int matricula;
  char nome[50];
  char curso[30];
  float pontuacao = 0;

  Aluno *aluno = NULL;
  alu_libera(&aluno);
  if (aluno == NULL) {
    printf("[Passou 0.67] - Teste da função alu_libera() com dados nulos!\n");
    pontuacao = 0.67;
  } else {
    printf("[Falhou 0.00] - Teste da função alu_libera() com dados nulos!\n");
  }
  return pontuacao;
}

float teste_fila_cria_com_dados_validos() {
  float pontuacao = 0;
  Fila *fila = fila_cria();
  if (fila != NULL) {
    printf("[Passou 1.00] - Teste da função fila_nova() com dados válidos!\n");
    pontuacao = 1.0;
  } else {
    printf("[Falhou 0.00] - Teste da função fila_nova() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_fila_libera_com_dados_validos() {
  float pontuacao = 0;
  Fila *fila = fila_cria();
  fila_libera(&fila);
  if (fila != NULL) {
    printf(
        "[Falhou 0.00] - Teste da função fila_libera() com dados válidos!\n");
  } else {
    printf(
        "[Passou 1.00] - Teste da função fila_libera() com dados válidos!\n");
    pontuacao = 1;
  }
  return pontuacao;
}

float teste_fila_libera_com_dados_nulos() {
  float pontuacao = 0;
  Fila *fila = NULL;
  fila_libera(&fila);
  if (fila == NULL) {
    printf("[Passou 0.50] - Teste da função fila_libera() com dados nulos!\n");
    pontuacao = 0.50;
  } else {
    printf("[Falhou 0.00] - Teste da função fila_libera() com dados nulos!\n");
  }
  return pontuacao;
}

float teste_fila_vazia_com_dados_validos() {
  float pontuacao = 0.0;
  Fila *fila = fila_cria();
  if (fila != NULL && fila_vazia(fila)) {
    printf("[Passou 1.00] - Teste da função fila_vazia() com dados válidos!\n");
    pontuacao = 1.0;
  } else {
    printf("[Falhou 0.00] - Teste da função fila_cheia() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_fila_insere_com_dados_validos() {
  float pontuacao = 0;
  Fila *fila = fila_cria();
  if (fila != NULL) {
    Aluno *abraao = alu_novo(1, "Abraão", "Computação");
    if (fila_insere(fila, abraao) == 1) {
      Aluno *jaco = alu_novo(2, "Jaco", "Computação");
      if (fila_insere(fila, jaco) == 1) {
        Aluno *jose = alu_novo(3, "Jose", "Computação");
        if (fila_insere(fila, jose) == 1) {
          printf("[Passou 1.00] - Teste da função fila_insere() com dados "
                 "válidos!\n");
          pontuacao = 1.0;
        } else {
          printf("[Falhou 0.00] - Teste da função fila_insere() com dados "
                 "válidos!\n");
        }
      } else {
        printf("[Falhou 0.00] - Teste da função fila_insere() com dados "
               "válidos!\n");
      }
    } else {
      printf("[Falhou 0.00] - Teste da função fila_insere() com dados "
             "válidos!\n");
    }
  } else {
    printf(
        "[Falhou 0.00] - Teste da função fila_insere() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_fila_insere_com_dados_invalidos() {
  float pontuacao = 0.0;
  Fila *fila = fila_cria();

  if (fila != NULL) {
    Aluno *abraao = alu_novo(1, "Abraão", "Computação");
    fila_insere(fila, abraao);
    Aluno *jaco = alu_novo(1, "Jaco", "Computação");
    if (fila_insere(fila, jaco) == 0) {
      printf("[Passou 0.67] - Teste da função fila_insere() com dados "
             "inválidos!\n");
      pontuacao = 0.67;
    }
  } else {
    printf("[Falhou 0.00] - Teste da função fila_insere() com dados "
           "inválidos!\n");
  }

  return pontuacao;
}

float teste_fila_insere_com_dados_nulos() {
  float pontuacao = 0;
  Fila *fila = fila_cria();
  if (fila_insere(fila, NULL) == -1) {
    Aluno *abraao = alu_novo(1, "Abraão", "Computação");
    if (fila_insere(NULL, abraao) == -1) {
      if (fila_insere(NULL, NULL) == -1) {
        printf("[Passou 0.50] - Teste da função fila_insere() com dados "
               "nulos!\n");
        pontuacao = 0.50;
      } else {
        printf("[Falhou 0.00] - Teste da função fila_insere() com dados "
               "nulos!\n");
      }
    } else {
      printf(
          "[Falhou 0.00] - Teste da função fila_insere() com dados nulos!\n");
    }
  } else {
    printf(
        "[Falhou 0.00] - Teste da função fila_adiciona() com dados nulos!\n");
  }
  return pontuacao;
}

float teste_fila_retira_com_dados_validos() {
  float pontuacao = 0;
  Fila *fila = fila_cria();
  if (fila != NULL) {
    Aluno *abraao = alu_novo(1, "Abraão", "Computação");
    fila_insere(fila, abraao);
    Aluno *jaco = alu_novo(2, "Jaco", "Computação");
    fila_insere(fila, jaco);
    Aluno *jose = alu_novo(3, "Jose", "Computação");
    fila_insere(fila, jose);
    Aluno *aluno = fila_retira(fila);

    if (alu_igual(aluno, abraao) == 1) {
      aluno = fila_retira(fila);
      if (alu_igual(aluno, jaco) == 1) {
        aluno = fila_retira(fila);
        if (alu_igual(aluno, jaco) == 1) {
          printf("[Passou 1.00] - Teste da função fila_retira() com dados "
                 "válidos!\n");
          pontuacao = 1.0;
        } else {
          printf("[Falhou 0.00] - Teste da função fila_retira() com dados "
                 "válidos!\n");
        }
      } else {
        printf("[Falhou 0.00] - Teste da função fila_retira() com dados "
               "válidos!\n");
      }
    } else {
      printf(
          "[Falhou 0.00] - Teste da função fila_retira() com dados válidos!\n");
    }
  } else {
    printf(
        "[Falhou 0.00] - Teste da função fila_retira() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_fila_retira_com_dados_nulos() {
  float pontuacao = 0;
  if (fila_retira(NULL) == NULL) {
    printf("[Passou 0.50] - Teste da função fila_retira() com dados nulos!\n");
    pontuacao = 0.50;
  } else {
    printf("[Falhou 0.00] - Teste da função fila_retira() com dados nulos!\n");
  }
  return pontuacao;
}

float teste_fila_primeiro_com_dados_validos() {
  float pontuacao = 0;
  Fila *fila = fila_cria();
  if (fila != NULL) {
    Aluno *abraao = alu_novo(1, "Abraão", "Computação");
    fila_insere(fila, abraao);
    Aluno *jaco = alu_novo(2, "Jaco", "Computação");
    fila_insere(fila, jaco);
    Aluno *jose = alu_novo(3, "Jose", "Computação");
    fila_insere(fila, jose);
    Aluno *aluno = fila_primeiro(fila);

    if (alu_igual(aluno, abraao) == 1) {
      printf("[Passou 0.335] - Teste da função fila_primeiro() com dados "
             "válidos!\n");
      pontuacao = 0.335;

    } else {
      printf("[Falhou 0.00] - Teste da função fila_primeiro() com dados "
             "válidos!\n");
    }
  } else {
    printf(
        "[Falhou 0.00] - Teste da função fila_primeiro() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_fila_primeiro_com_dados_nulos() {
  float pontuacao = 0;
  Fila *fila = fila_cria();

  if (fila_primeiro(fila) == NULL) {
    fila = NULL;
    if (fila_primeiro(fila) == NULL) {
      printf("[Passou 0.335] - Teste da função fila_primeiro() com dados "
             "nulos!\n");
      pontuacao = 0.335;
    } else {
      printf(
          "[Falhou 0.00] - Teste da função fila_primeiro() com dados nulos!\n");
    }
  } else {
    printf(
        "[Falhou 0.00] - Teste da função fila_primeiro() com dados nulos!\n");
  }

  return pontuacao;
}

float teste_fila_busca_com_dados_validos() {
  float pontuacao = 0.0;
  int matricula;
  char nome[50];
  char curso[30];

  Fila *fila = fila_cria();
  if (fila != NULL) {
    Aluno *abraao = alu_novo(1, "Abraão", "Computação");
    fila_insere(fila, abraao);
    Aluno *jaco = alu_novo(2, "Jaco", "Computação");
    fila_insere(fila, jaco);
    Aluno *jose = alu_novo(3, "Jose", "Computação");
    fila_insere(fila, jose);
    Aluno *aux = fila_busca(fila, 2);
    if (aux != NULL) {
      alu_acessa(aux, &matricula, nome, curso);
      if (matricula == 2 && strcmp(nome, "Jaco") == 0 &&
          strcmp(curso, "Computação") == 0) {
        printf("[Passou 1.00] - Teste da função fila_busca() com dados "
               "válidos!\n");
        pontuacao = 1.0;
      } else {
        printf("[Falhou 0.00] - Teste da função fila_busca() com dados "
               "válidos!\n");
      }
    } else {
      printf("[Falhou 0.00] - Teste da função fila_busca() com dados "
             "válidos!\n");
    }
  } else {
    printf("[Falhou 0.00] - Teste da função fila_busca() com dados válidos!\n");
  }
  return pontuacao;
}

float teste_fila_busca_com_dados_invalidos() {
  float pontuacao = 0;
  int matricula;
  char nome[50];
  char curso[30];

  Fila *fila = fila_cria();
  if (fila != NULL) {
    Aluno *abraao = alu_novo(1, "Abraão", "Computação");
    fila_insere(fila, abraao);
    Aluno *jaco = alu_novo(2, "Jaco", "Computação");
    fila_insere(fila, jaco);
    Aluno *jose = alu_novo(3, "Jose", "Computação");
    fila_insere(fila, jose);
    Aluno *aux = fila_busca(fila, 5);
    if (aux == NULL) {
      printf("[Passou 0.67] - Teste da função fila_busca() com dados "
             "inválidos!\n");
      pontuacao = 0.67;
    } else {
      printf("[Falhou 0.00] - Teste da função fila_busca() com dados "
             "inválidos!\n");
    }
  } else {
    printf("[Falhou 0.00] - Teste da função fila_busca() com dados "
           "inválidos!\n");
  }
  return pontuacao;
}

float teste_fila_busca_com_dados_nulos() {
  float pontuacao = 0;
  int matricula;
  char nome[50];
  char curso[30];

  Aluno *aux = fila_busca(NULL, 1);
  if (aux == NULL) {
    printf("[Passou 0.50] - Teste da função fila_busca() com dados nulos!\n");
    pontuacao = 0.50;
  } else {
    printf("[Falhou 0.00] - Teste da função fila_busca() com dados nulos!\n");
  }
  return pontuacao;
}

float bateria_testes_01() {
  printf("====================================================================="
         "====================\n");
  printf(".:: Teste do TAD Aluno: Bateria de Testes 01 ::.\n");
  printf("====================================================================="
         "====================\n");
  float pontuacao = 0;
  pontuacao = teste_aluno_novo_com_dados_validos() +
              teste_aluno_atribui_com_dados_validos() +
              teste_aluno_acessa_com_dados_validos() +
              teste_aluno_libera_com_dados_validos();
  printf("\nTotal: %f\n", pontuacao);
  printf("====================================================================="
         "====================\n\n");
  return pontuacao;
}

float bateria_testes_02() {
  printf("====================================================================="
         "====================\n");
  printf(".:: Teste do TAD Aluno: Bateria de Testes 02 ::.\n");
  printf("====================================================================="
         "====================\n");
  float pontuacao = 0;
  pontuacao = teste_aluno_novo_com_dados_invalidos() +
              teste_aluno_atribui_com_dados_invalidos();
  printf("\nTotal: %f\n", pontuacao);
  printf("====================================================================="
         "====================\n\n");
  return pontuacao;
}

float bateria_testes_03() {
  printf("====================================================================="
         "====================\n");
  printf(".:: Teste do TAD Aluno: Bateria de Testes 03 ::.\n");
  printf("====================================================================="
         "====================\n");
  float pontuacao = 0;
  pontuacao = teste_aluno_novo_com_dados_nulos() +
              teste_aluno_atribui_com_dados_nulos() +
              teste_aluno_libera_com_dados_nulos();
  printf("\nTotal: %f\n", pontuacao);
  printf("====================================================================="
         "====================\n\n");
  return pontuacao;
}

float bateria_testes_04() {
  printf("====================================================================="
         "====================\n");
  printf(".:: Teste do TAD Fila: Bateria de Testes 04 ::.\n");
  printf("====================================================================="
         "====================\n");
  float pontuacao = 0;
  pontuacao += teste_fila_cria_com_dados_validos() +
               teste_fila_insere_com_dados_validos();

  pontuacao += teste_fila_libera_com_dados_validos() +
               teste_fila_retira_com_dados_validos();

  pontuacao += teste_fila_primeiro_com_dados_validos() +
               teste_fila_primeiro_com_dados_nulos();

  pontuacao += teste_fila_busca_com_dados_validos() +
               teste_fila_vazia_com_dados_validos();
  printf("\nTotal: %f\n", pontuacao);
  printf("====================================================================="
         "====================\n\n");
  return pontuacao;
}

float bateria_testes_05() {
  printf("====================================================================="
         "====================\n");
  printf(".:: Teste do TAD Fila: Bateria de Testes 05 ::.\n");
  printf("====================================================================="
         "====================\n");
  float pontuacao = 0;
  pontuacao += teste_fila_insere_com_dados_invalidos() +
               teste_fila_insere_com_dados_invalidos();

  pontuacao += teste_fila_busca_com_dados_invalidos();
  printf("\nTotal: %f\n", pontuacao);
  printf("====================================================================="
         "====================\n\n");
  return pontuacao;
}

float bateria_testes_06() {
  printf("====================================================================="
         "====================\n");
  printf(".:: Teste do TAD Fila: Bateria de Testes 06 ::.\n");
  printf("====================================================================="
         "====================\n");
  float pontuacao = 0;
  pontuacao +=
      teste_fila_insere_com_dados_nulos() + teste_fila_libera_com_dados_nulos();

  pontuacao +=
      teste_fila_retira_com_dados_nulos() + teste_fila_busca_com_dados_nulos();
  printf("\nTotal: %f\n", pontuacao);
  printf("====================================================================="
         "====================\n\n");
  return pontuacao;
}

int main(void) {
  float pontuacao_TAD_Aluno = bateria_testes_01();
  pontuacao_TAD_Aluno += bateria_testes_02();
  pontuacao_TAD_Aluno += bateria_testes_03();

  float pontuacao_TAD_Fila = bateria_testes_04();
  pontuacao_TAD_Fila += bateria_testes_05();
  pontuacao_TAD_Fila += bateria_testes_06();
  printf("Nota TP01: %f\n",
         0.3 * pontuacao_TAD_Aluno + 0.7 * pontuacao_TAD_Fila);
  return 0;
}