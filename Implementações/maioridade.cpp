#include <stdlib.h>
#include <stdio.h>

int maiorDeIdade(int idade);
int main(){
	int idade;
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	if(maiorDeIdade(idade) == 1){
		printf("BLOCO DO IF \n");
		printf("Aluno maior de 18 anos.");
	}
	else{
		printf("BLOCO DO ELSE \n");
		printf("Aluno menor de 18 anos.");
	}
	return 0;
}

int maiorDeIdade(int idade){
	if(idade >= 18)
		return 1;
	else
		return 0;
}


