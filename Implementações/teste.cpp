#include <stdlib.h>
#include <stdio.h>

#define PI 3.14

float calc_area(float r);

int main(){
	float raio;
	printf("Digite o raio da circunferencia:\n");
	scanf("%f",&raio);
	printf("A area eh: %.2f", calc_area(raio));
}


float calc_area(float r){
	return PI * r * r;
}


