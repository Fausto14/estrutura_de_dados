#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h" // inclui os protótipos
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
	int consPos2 = consulta_lista_pos(li,mat,&aluno5);
}
