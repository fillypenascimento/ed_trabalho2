#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"printPersonagem.h"
#include"arvore.h"
#include"criador.h"
#include"lista.h"

//oi
int main()
{

	/*
	Lista *list = cria_lista();

	for(int i = 1; i <= 4; ++i)
	{
		Tree* personagem = cria_arvore_personagem(i);
		//chamada de funcao/funcoes de inserção de caracteristicas
		insere_lista(list,i-1,personagem);
	}
	*/
	Genetica *g;
	Tree* personagem = cria_arvore_personagem(0);

	printf("%s\n",personagem->left->left->left->info->carac);
	printf("%s\n",personagem->left->left->left->right->info->carac);
	/*
	imprime_arvore(personagem1);

	printf("\nO personagem impresso graficamente nao corresponde ao personagem vazio impresso de forma textual");
	printf("\n\n");


	//Caso queira testar a biblioteca grafica
	imprime_personagem_aleatorio();
	*/

	return 0;
}
