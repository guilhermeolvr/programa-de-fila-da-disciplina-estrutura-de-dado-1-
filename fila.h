#include <stdio.h>
#include <stdlib.h>

/*� uma estrutura linear composta de n�s. Esses n�s podem n�o ocupar posi��es sequ�nciais na mem�ria,
assim sendo, cada n� deve saber onde est� o pr�ximo elemento.*/

typedef struct fila{
    int dado;
    struct fila *prox;
} Fila;

