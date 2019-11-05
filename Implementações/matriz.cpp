#include <stdlib.h>
#include <stdio.h>

int main(){
	int qtd_alunos = 4;
	int qtd_notas = 3;
	float notas[qtd_alunos][qtd_notas] = {
											{9.0, 5.6, 3.0},
											{6.0, 5.0, 7.0},
											{8.0, 8.0, 6.0},
											{7.0, 5.6, 9.0}, 
										};
	printf("%.2f \n",notas[2][2]);
	return 0;
}


