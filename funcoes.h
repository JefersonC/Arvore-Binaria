#include "stdlib.h" 
#include "stdio.h" 
#include "conio.h" 

/*
	fun��es para �rvore bin�ria
	@author Jeferson Capopibanco <jefersoncapobianco@gmail.com>
*/


/*
	@method inserir
	
	M�todo respons�vel pela inser��o de dados na arvore sem balanceamento
	
	@param TNo raiz		Raiz da �rvore que ir� receber um novo elemento
	@param TConteudo	Conteudo a ser inserido na �rvore
*/
TNo* ab_inserir(TNo *raiz, TConteudo *conteudo)
{
	if ( NULL == raiz )
	{
		
		raiz = new TNo;
		raiz->conteudo = *conteudo;
		raiz->esq = NULL;
		raiz->dir = NULL;
		puts(raiz->conteudo.nome);
		return raiz;
	}

	if ( conteudo->index < raiz->conteudo.index )
	{
		raiz->esq = ab_inserir( raiz->esq, conteudo );			
	}
	else 
	{
		raiz->dir = ab_inserir( raiz->dir, conteudo );
	}

	return raiz;	
}

void ab_preOrdem (TNo *raiz)
{
	if (raiz != NULL)
	{
		printf("%d:\n", raiz->conteudo.index);
		puts(raiz->conteudo.nome);
		puts(raiz->conteudo.curso);
		ab_preOrdem(raiz->esq);
		ab_preOrdem(raiz->dir);
	}
}
