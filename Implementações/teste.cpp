#include <stdlib.h>
#include <stdio.h>

#define PI 3.14

float calc_area(float r);

float area;

int main(){
	float raio; // raio � vari�vel local
	printf("Digite o raio da circunferencia:\n");
	scanf("%f",&raio);
	area = calc_area(raio); // area � vari�vel global
	printf("A area eh: %.2f", area);
}

float calc_area(float r){
	return PI * r * r; // r � vari�vel local
}


