//ficha de cadastro
//usando vetores
//1 será requisitado ao usuario a quantidade de cadastros
//calculo de IMC
//peso / altura * altura
//media do IMC

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    //declaração das variaveis
    int qtdPessoas, i;
    
    
    
	//entrada de dados
	printf("Digite a quantidade de pessoas: ");
	scanf("%d", &qtdPessoas);
	
	int peso[qtdPessoas];
	float altura[qtdPessoas];
	float IMC[qtdPessoas];
	
	for(i=0;i<qtdPessoas;i++){
		printf("Digite o peso da pessoa %i: ", i+1);
		scanf("%d", &peso[i]);
		printf("Digite a altura da pessoa %i: ", i+1);
		scanf("%f", &altura[i]);
		IMC[i]=peso[i]/(altura[i]*altura[i]);
	}
	for(i=0; i<qtdPessoas; i++){
		printf("\n\n%i Pessoa\n", i+1);
		printf("\nPeso: %i", peso[i]);
		printf("\nAltura: %.2f", altura[i]);
		printf("\nIMC: %.2f", IMC[i]);
	}
}
