#include <stdlib.h>
#include <stdio.h>

int main(){
	int num;
	
	do{
		printf("Digite um numero inteiro positivo:\n");
		scanf("%d",&num);
	}while(num < 0);
	
	return 0;
}


