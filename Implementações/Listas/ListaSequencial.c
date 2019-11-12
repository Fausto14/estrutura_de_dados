#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h" // inclui os protótipos

struct lista{
	int qtd;
	struct aluno dados[MAX];
};

Lista* criar_lista(){
	Lista *li;
	li = (Lista*) malloc(sizeof(struct lista));
	if(li != NULL){
		li->qtd = 0;
	}
	return li;
}

void libera_lista(Lista* li){
	free(li);
}

int tamanho_lista(Lista* li){
	if(li == NULL)
		return -1; //codigo de erro
	else 
		return li->qtd;
}


//informações da lista
int lista_cheia(Lista* li){
	if(li == NULL)
		return -1;
	return (li->qtd == MAX);
}

int lista_vazia(Lista* li){
	if(li == NULL)
		return -1;
	return (li->qtd == 0);
}

//inserções de elementos na lista
int insere_lista_final(Lista* li, struct aluno al){
	if(li == NULL)
		return 0;
	if(lista_cheia(li))
		return 0;
		
	li->dados[li->qtd] = al;
	li->qtd++;
	return 1;
}

int insere_lista_inicio(Lista* li, struct aluno al){
	
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;
	int i;
	for(i = li->qtd-1; i >= 0; i--){
		li->dados[i+1] = li->dados[i];
	}
	
	li->dados[0] = al;
	li->qtd++;
	return 1;
}

//trata os 3 casos: inicio, fim, meio
int insere_lista_ordenada(Lista* li, struct aluno al){
	
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;
	int k,i = 0;
	
	//busca aonde vai ser inserido o aluno
	// forma ordenada pela matricula
	while(i<li->qtd && li->dados[i].matricula < al.matricula){
		i++;
	}
	
	//deslocamento dos elementos
	for(k = li->qtd-1; k >= i; k--){
		li->dados[k+1] = li->dados[k];
	}
	
	li->dados[i] = al;
	li->qtd++;
	return 1;
}

//remoção de elementos na lista
int remove_lista_final(Lista* li){
	if(li == NULL)
		return 0;
	if(lista_vazia(li))
		return 0;
		
	li->qtd--;
	return 1;
}

int remove_lista_inicio(Lista* li){
	if(li == NULL)
		return 0;
	if(lista_vazia(li))
		return 0;
		
	//deslocamento dos elementos restantes para a esquerda
	int k;
	for(k = 0; k < li->qtd-1; k++){
		li->dados[k] = li->dados[k+1];
	}
	li->qtd--;
	return 1;
}

//remove um elemnto em qualquer posição da lista, baseado na matricula.
int remove_lista(Lista* li, int mat){
	
	if(li == NULL) return 0;
	if(lista_vazia(li)) return 0;
	int k,i = 0;
	
	//busca onde está o aluno na lista
	while(i<li->qtd && li->dados[i].matricula != mat){
		i++;
	}
	
	if(i == li->qtd) return 0; //elemento não encontrado
	
	//deslocamento dos elementos
	for(k = i; k < li->qtd-1; k++){
		li->dados[k] = li->dados[k+1];
	}
	
	li->qtd--;
	return 1;
}

//consulta de elemento pela posição
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
	if(li == NULL  || pos <= 0 || pos > li->qtd)
		return 0;
		
	*al = li->dados[pos-1];
	return 1;
}

//consulta de elemento pelo conteúdo (matricula)
int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
	if(li == NULL) return 0;
	int i = 0;
	
	//busca onde está o aluno na lista
	while(i<li->qtd && li->dados[i].matricula != mat){
		i++;
	}
	
	if(i == li->qtd) return 0; //elemento não encontrado
			
	*al = li->dados[i];
	return 1;
}

//função principal
int main(){
	
	Lista *li;
	
	li = criar_lista();
	libera_lista(li);
	
	//informações da lista
	int tam 		= tamanho_lista(li);
	int cheia 		= lista_cheia(li);
	int vazia  		= lista_vazia(li);
	
	//inserindo na lista
	struct aluno aluno1;
	aluno1.matricula = 17;
	strcpy(aluno1.nome , "Fausto");
	aluno1.n1 = 7.8;
	aluno1.n2 = 9.0;
	aluno1.n3 = 6.0;
	
	struct aluno aluno2;
	aluno2.matricula = 28;
	strcpy(aluno2.nome , "Ana");
	aluno2.n1 = 5.0;
	aluno2.n2 = 7.0;
	aluno2.n3 = 4.0;
	
	struct aluno aluno3;
	aluno3.matricula = 13;
	strcpy(aluno3.nome , "Pedro");
	aluno3.n1 = 9.0;
	aluno3.n2 = 2.0;
	aluno3.n3 = 8.0;
	
	int insereFim 	= insere_lista_final(li,aluno1);
	int insereIni 	= insere_lista_inicio(li,aluno2);
	int insereOrd 	= insere_lista_ordenada(li,aluno3);
	
	//removendo na lista
	int removeFim 	= remove_lista_final(li);
	int removeIni 	= remove_lista_inicio(li);
	int removeMat 	= remove_lista(li, 28);//removendo a Ana
	
	//consultando na lista
	struct aluno aluno4;
	int posicao = 1;
	int consPos	= consulta_lista_pos(li,posicao,&aluno4);
	struct aluno aluno5;
	int mat = 28;
	int consPos	= consulta_lista_pos(li,mat,&aluno4);
}
