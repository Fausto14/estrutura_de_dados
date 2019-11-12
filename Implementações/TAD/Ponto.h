typedef struct ponto Ponto;

//cria um novo ponto
Ponto* cria(float x, float y);
//Libera um ponto
void libera(Ponto* p);
//acessa os valores x e y de um ponto
void acessa(Ponto* p, float* x, float* y);
//atribui os valores x e y a um ponto
void acessa(Ponto* p, float* x, float* y);
//calcula a distancia entre dois pontos
float distancia(Ponto* p1, Ponto* p2);


