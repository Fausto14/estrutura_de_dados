#include <stdlib.h>
#include <stdio.h>

int main(){
	int num;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&num);
	
	for(int i = 0; i <= num; i++){
		printf("%d\n",i);
	}
	
	return 0;
}


