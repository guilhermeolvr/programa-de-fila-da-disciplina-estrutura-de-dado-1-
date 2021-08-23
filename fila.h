#include <stdio.h>
#include <stdlib.h>

/*É uma estrutura linear composta de nós. Esses nós podem não ocupar posições sequênciais na memória,
assim sendo, cada nó deve saber onde está o próximo elemento.*/

typedef struct fila{
    int dado;
    struct fila *prox;
} Fila;

