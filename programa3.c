#include<stdio.h>
#include<stdlib.h>

void main() {
	int num1;
	int num2;
	int resultado;

	printf("Digite o primeiro numero");
	scanf("%d",&num1);
	printf("Digite o segundo numero");
	scanf("%d",&num2);

	resultado= num1+num2;

	printf("Resultado da soma: %d\n",resultado);
}
