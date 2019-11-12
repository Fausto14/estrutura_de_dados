#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h" // inclui os protótipos

//definição do tipo de dados
struct ponto{
	float x;
	float y;
};

//aloca e retorna um ponto com coordenadas x e y
Ponto* cria(float x, float y){
	Ponto* p = (Ponto*) malloc(sizeof(Ponto));
	if(p != NULL){
		p->x = x;
		p->y = y;
	}
	
	return p;
}

//libera a memória alocada para um ponto
void libera(Ponto* p){
	free(p);
}

//recupera, por referencia, o valor de um ponto
void acessa(Ponto* p, float* x, float* y){
	*x = p->x;
	*y = p->y;
}

//atribui a um ponto as coordenadas x e y
void atribui(Ponto* p, float x, float y){
	p->x = x;
	p->y = y;
}

//Calcula a distancia entre dois pontos
float distancia(Ponto* p1, Ponto* p2){
	float dx = p2->x - p1->x;
	float dy = p2->y - p1->y;
	return sqrt( (dx * dx) + (dy * dy) );
}


// função principal
int main(){
	float d;
	Ponto *p, *q;
	//Ponto r;  //ERRO
	p = cria(9,20);
	q = cria(12,24);
	//q->x = 2;  //ERRO
	d = distancia(p,q);
	printf("Distancia entre pontos: %.2f \n",d);
	libera(p);
	libera(q);
	
	return 0;
}


