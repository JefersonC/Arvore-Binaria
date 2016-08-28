#include "stdlib.h" 
#include "stdio.h" 
#include "conio.h" 
#include "tipos.h"
#include "funcoes.h"

/*
	Manupilação de Árvore binária
	@author Jeferson Capopibanco <jefersoncapobianco@gmail.com>
*/

TNo* inserir( TNo *r )
{
	TConteudo temp;
	
	printf( "Digite o codigo: " );
	scanf( "%d", &temp.index );
	fflush(stdin);
	
	printf( "Digite o nome: " );
	gets(temp.nome);
	fflush(stdin);
	
	printf( "Digite o curso: " );
	gets(temp.curso);
	fflush(stdin);
	
	
	return ab_inserir( r, &temp );
}

void imprimeMenu()
{
	puts( "Arvore Binaria" ); 
    puts( "1. Inserir" ); 
    puts( "2. Apresentar (pre-ordem)" ); 
    puts( "0. Sair" ); 
}

int main() 
{ 
  
    TNo *raiz;
	raiz = NULL;
  	int menu;
  	
	do
	{
		imprimeMenu();
		printf("Entre com sua opcao: \n"); 
        scanf("%d", &menu); 
        
        switch(menu) 
        { 
            case 1: 
				raiz = inserir( raiz );
				break;  
				            
			case 2: 
				ab_preOrdem(raiz);
				break; 
			        
			case 0: break; 
			
            default : printf("\nOpcao invalida"); 
        }
	}while (menu != 0);
}
