#include <stdlib.h>
#include <stdio.h>

int main(){
	int indice = 2;
	int codigo_produto[] = {56, 78, 32, 99, 112};
	float precos[5];
	precos[0] = 10.4;
	precos[1] = 1.0;
	precos[2] = 2.5;
	precos[3] = 10.0;
	precos[4] = 7.6;
	printf("Produto %d : %d  | %.2f",indice, codigo_produto[indice],precos[indice]);
	// saída: Produto 2 : 32  | 2.50
	return 0;
}


