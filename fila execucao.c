#include <stdio.h>
#include "fila cpp.cpp"

void insere();
void remove();
void imprime ();


int main(){
  menu();
  system("PAUSE");	
  return 0;


   Fila *p = NULL;

     system("cls");
     int op;
     printf("Opcao 1: Inserir dados:  ");
     printf("\nOpcao 2: remover dados: ");
     printf("\nOpcao 3: imprimir:\n");
     scanf("%d",&op);
     int valor;
     switch(op)
     {
               fflush(stdin);
               case 1:
                    {
                        
                        {
                           printf("Digite o valor:\n\n ");
                           scanf("%d",&valor); 
                            insere(&p, valor );
                           fflush(stdin);
                           
                        }
                       
                    }
              case 2:
                   {   
                    printf("Digite o valor que ser removido da pilha:\n\n ");
                       scanf("%d",&valor);
                       
                        remove(&p,valor);
					   
                   }
                        
              case 3:
                   {
                   	  Printf("imprimindo fila:\n\n");
                       imprime (&p);
                   }
                   
                   while (op!=0);
     }



}

































	
