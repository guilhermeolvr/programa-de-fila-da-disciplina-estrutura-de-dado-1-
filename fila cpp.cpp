#include "fila.h"







void insere(Fila *p, int x){
    Fila *novo = (Fila*)malloc(sizeof(Fila));
    if(novo == NULL)
        exit(EXIT_FAILURE);
    novo->dado = x;
    novo->prox = NULL;
    p->prox = novo;
     if(p==NULL){
         p=novo;
     }
     else {
         novo-> prox =p;
         p=novo;
     }
}

void remove(Fila *le, int x){
    Fila *p = le;
    	
    //for(Fila *p = le; p->prox != NULL && p->prox->dado != x; p = p->prox){
        Fila *tmp = p->prox;
        p->prox = tmp->prox;
        free(tmp);
    
 }



void imprime (Fila *le){
    Fila *p = le->prox;
    while(p != NULL){
        printf("%d", p->dado);
        p = p->prox;
    }
} 
