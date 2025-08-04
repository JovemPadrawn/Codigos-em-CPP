//jogo de adivinhação
//nOculto=29
//enquanto o usuário não acertar o número
//o sistema fica em loop
//qual a quantidade de loop a ser executado?
//parte 2
//será informado antes dos palpites a quantidade desejada 0 - 10
//caso o usuário use todos as oportunidades, e não acertou
//o loop para mesma assim
//parte 3
//caso o distância entre o valor digitado e o Noculto 
//for menor ou igual 5 "Ta Quente"
//for menor ou igual 10 e maior que 5 "Ta morno"
//for maior que 10 "Ta Frio"

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL)); //randomico
	
	int nOculto=(rand() % 10)+1; //5 
	int palpite, tentativas, qtdTentativas=0;
	int intervalo;
	
	printf("Quantas Tentativas deseja (0-10): ");
	scanf("%d", &tentativas); 
	
	do{
		qtdTentativas++;
		printf("Digite um Número: ");
		scanf("%i", &palpite); 
		
		intervalo=nOculto-palpite; 		
		if(intervalo<0) intervalo=intervalo*-1;  //utilizado para deixar o valor Positivo
		
		if(intervalo>10) printf("Está Frio...");
		if(intervalo<=10 && intervalo>5) printf("Está Morno...");
		if(intervalo<=5) printf("Está Quente..."); 
		
		if(intervalo>10){
			printf("Está Frio...");
		}else if(intervalo<=10 && intervalo>5){
			printf("Está Morno...");
		}else if(intervalo<=5){
			printf("Está Quente...");
		}
		
		if(intervalo>10){
			printf("Está Frio...");
		}else{
			if(intervalo<=10 && intervalo>5){
				printf("Está Morno...");
			}else {
				if(intervalo<=5){
					printf("Está Quente...");
				}
			}
		} 
		
		
	}while(palpite!=nOculto && qtdTentativas<tentativas);
	printf("\nNúmero Oculto %i", nOculto);
}