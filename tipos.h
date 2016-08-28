/*
	tipos para Árvore binária
	@author Jeferson Capopibanco <jefersoncapobianco@gmail.com>
*/
typedef struct conteudo
{
	int index;
	char nome[40];
	char curso[40];
}TConteudo;

typedef struct no
{
	TConteudo conteudo; 
    struct no *esq, *dir; 
} TNo;
