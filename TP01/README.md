## **Universidade Federal do Ceará** | **Departamento de Computação**
### **Disciplina: Programação – CK226** | **Professor: Lincoln Souza Rocha**

**Tarefa de Programação 01**

As filas são estruturas de dados do tipo FIFO (*first-in first-out*), onde o primeiro elemento a ser inserido, será o primeiro a ser retirado, ou seja, adiciona-se itens no fim e remove-se do início. Nessa tarefa de programação, você deverá implementar uma fila de alunos. Cada aluno é um TAD (Tipo Abstrato de Dados) que possui os seguintes campos: `matricula` (que deve reber um valor inteiro maior ou igual a zero), `nome` (que deve receber uma string de tamanho máximo 50) e `curso` (que deve receber uma string de tamanho máximo 30). A `struct` do TAD `Fila` deve possuir um campo vetor de ponteiros para o tipo `Aluno` (`fila_alunos`), onde alunos serão armazenados. Os arquivos de cabeçalho `Aluno.h` e `Fila.h` descrevem o contrato dos seus respectivos TADs (`Aluno` e `Fila`) e o aquivo `TestaFila.c` provê uma bateria de testes para avaliar a sua implementação desses TADs. 

**OBS1** *Os TADs* `Aluno` *e* `Fila` *devem ser implementados em arquivos separados com os nomes* `Aluno.c` *e* `Fila.c`.

**OBS2** *Lembre-se que vetores possuem tamanho fixo e, por esse motivo, pode haver a necessidade de realocação de memória caso o número de alunos exceda o tamanho inicial do vetor. Dica! use a função* `realloc()` *para isso.*.

**OBS3**: *Comandos para compilação em separado dos módulos do programa via linha de comando*:
```
$ gcc -c Aluno.c -o Aluno.o
$ gcc -c Fila.c -o Fila.o
$ gcc -c TestaFila.c -o TestaFila.o
$ gcc -o TestaFila.bin Aluno.o Fila.o TestaFila.o
$./TestaFila.bin
```
