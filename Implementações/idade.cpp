#include <stdlib.h>
#include <stdio.h>

int main(){
	int idade;
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	if(idade >= 18){
		printf("Aluno maior de 18 anos.");
	}
	else{
		printf("Aluno menor de 18 anos.");
	}
	return 0;
}


