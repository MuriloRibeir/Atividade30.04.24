#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	float numero;
	printf("Digite um numero decimal usando ponto como separador \n");
	scanf("%f",&numero);
	printf("%.2f",numero);
}
