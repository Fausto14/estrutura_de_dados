#define MAX 100
struct aluno{
	int matricula;
	char nome[30];
	float n1, n2, n3;
};
typedef struct lista Lista;

Lista* cria_lista();
void  libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);

//existem 3 tipos de inserção: final, inicio e no meio da lista
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);

//existem 3 tipos de iremoção: final, inicio e no meio da lista
int remove_lista_final(Lista* li);
int remove_lista_inicio(Lista* li);
//remove em qualque posição
int remove_lista(Lista* li, int mat);

//consultas na lista: posição e conteudo(matricula)
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);
