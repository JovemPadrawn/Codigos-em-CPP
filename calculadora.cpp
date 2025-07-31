#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

float soma ();
float subtracao ();
void multiplicacao ();
void divisao ();



int main(){
	setlocale (LC_ALL, "Portuguese");
	char op, operacao;
	float n1, n2, resposta;
	do{
		Sleep (2000);
		system ("cls");
		printf("Calculadora");
		printf("\nDigite o primeiro valor: ");
		scanf("%f", &n1);
		printf("\nDigite o segundo valor: ");
		scanf("%f", &n2);
		printf("\nEscolha a operação (+, -, *, /): ");
		operacao = getch();
		switch (operacao){
			case '+':
				resposta = soma (n1, n2);
				printf("\nResposta: %f", resposta);
				break;
			case '-':
				resposta = subtracao (n1, n2);
				printf("\nResposta: %f", resposta);
				break;
			case '*':
				multiplicacao();
				break;
			case '/':
				resposta = n1 / n2;
				printf("\nResposta: %f", resposta);
				break;
			default:
				printf("\nErro");
			
		}
	} while (op != 5);
}

float soma(float n1, float n2){
	return n1+n2;
}
float subtracao(float n1, float n2){
	return n1-n2;
}
void multiplicacao(float n1, float n2){
	printf("\nResposta: %f", n1 * n2);
}
void divisao(){
	float n1, n2;
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &n1);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &n2);
	printf("\nResposta: %f", n1 / n2);
}
