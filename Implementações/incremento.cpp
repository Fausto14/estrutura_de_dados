#include <stdlib.h>
#include <stdio.h>

int main(){
	int contador = 3;
	printf("%d\n",contador);
	
	contador++;
	printf("%d\n",contador);
	
	contador = contador + 1;
	printf("%d\n",contador);
	
	contador += 1;
	printf("%d\n",contador);
	
	contador += 5;
	printf("%d\n",++contador);
	
	return 0;
}


