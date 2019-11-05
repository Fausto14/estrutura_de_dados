#include <stdlib.h>
#include <stdio.h>

int main(){
	int num;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&num);
	
	while(num > 0){
		printf("%d\n",num);
		num = num - 1;
	}
	
	return 0;
}


