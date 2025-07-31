#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

typedef struct dados{
	int idaluno;
	char nome[100];
	float telefone;
}alunos;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	alunos cadastro[10];
	int i, id;
	cadastro[i].idaluno=0;
	for(i=0;i<3;i++){
		cadastro[i].idaluno = i+1;
		printf("\nNome: ");
		fflush(stdin);
		gets(cadastro[i].nome);
		printf("\nTelefone: ");
		fflush(stdin);
		scanf("%f", &cadastro[i].telefone);
	}
	Sleep(1000);
	system("cls");
	
	for(i=0;i<3;i++){
		printf("\nId: %d", cadastro[i].idaluno);
		printf("\nNome: %s", cadastro[i].nome);
		printf("\nTelefone: %f", cadastro[i].telefone);
	}
	
	printf("\nDigite o ID a alterar: ");
	fflush(stdin);
	scanf("%d", &id);
	i=0;
	do {
		i++;
		if (id == cadastro[i].idaluno){
			printf("\nNome: ");
			fflush(stdin);
			gets(cadastro[i].nome);
			printf("\nTelefone: ");
			fflush(stdin);
			scanf("%f", &cadastro[i].telefone);
			break;
		} else {
			printf("\n\n%d - %d", id, cadastro[i].idaluno);
		}

	} while (id != cadastro[i].idaluno);
	
}
