//jogo de adivinhação
//nOculto=29
//enquanto o usuario não acertar o numero, o sistema fica em loop
//qual a quantidade de loops a ser executado
//parte 2
//sera informado antes dos palpites a quantidade desejada 0 - 10
//caso o usuario use todos as oportunidades, e nao acertar, o loop para mesmo assim

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL)); //randomico
    SetConsoleOutputCP(CP_UTF8);
	int nOculto=(rand() %10 )+1;
	int palpite, tentativas, qtdtentativas=0;
	
	printf("Quantas tentativas deseja (0-10): ");
	scanf("%d", &tentativas);
	
	do{
		qtdtentativas++;
		printf("\nDigite um numero: ");
		scanf("%i", &palpite);
		
		
		
	}while(palpite != nOculto && qtdtentativas<tentativas);
	
	printf("\nNumero oculto %i", nOculto);

}
