#include <stdio.h>

void soma (float valor1, float valor2) {
	float resultado;
	resultado = valor1 + valor2;
	printf("Resultado da soma:%.2f\n");
}

void subtracao (float valor1, float valor2) {
	float resultado;
	resultado = valor1 - valor2;
	printf("Resultado da subtracao:%.2f\n");
}

void multiplicacao (float valor1, float valor2) {
	float resultado;
	resultado = valor1 * valor2;
	printf("Resultado da multiplicacao:%.2f\n",resultado);
}

void divisao (float valor1, float valor2) {
	float resultado;
	resultado = valor2 / valor1;
	printf("Resultado da divisao:%.2f\n",resultado);
}

float pegaValor(){
	float valor;
	printf ("Digite um valor:\n");
	return valor;
	
}

void main() {
    char operacao;
  
    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch(operacao) {
        case '+':
            soma(pegaValor(),pegaValor());
            break;
        case '-':
            subtracao(pegaValor(),pegaValor());
            break;
        case '*':
            multiplicacao(pegaValor(),pegaValor());
            break;
        case '/':
            if (pegaValor() !=0 && pegaValor() !=0) {
                divisao(pegaValor(),pegaValor());
            } 
	    else {
                printf("Erro: Não pode conter número 0\n");
            }	
	    break;

}} 



