#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
//registro

typedef struct dependente{
	char nome[50];
	int idade;
	char tel[15];
}dependente;

typedef struct DadoPessoa{
	char nome[50];
	char email[50];
	int idade;
	char tel[15];
	dependente dep[2];
}DadoPessoa;

int main() {
	DadoPessoa Pessoa;
    SetConsoleOutputCP(CP_UTF8);

	printf("Digite o nome: ");
	gets(Pessoa.nome);
	fflush(stdin); //limpeza do buffer do teclado
	
	printf("Digite o email: ");
	gets(Pessoa.email);
	fflush(stdin);
	
	printf("Digite a idade: ");
	scanf("%i", &Pessoa.idade);
	fflush(stdin);
	
	printf("Digite o telefone: ");
	gets(Pessoa.tel);
	fflush(stdin);
	
	printf("Digite o nome do dependente: ");
	gets(Pessoa.dep.nome);
	fflush(stdin);
	
	printf("Digite a idade do dependente: ");
	scanf("%i", &Pessoa.dep.idade);
	fflush(stdin);
	
	printf("Digite o telefone do dependente: ");
	gets(Pessoa.dep.tel);
	fflush(stdin);
	
	printf("\nnome: %s", Pessoa.nome);
	printf("\nemail: %s", Pessoa.email);
	printf("\nidade: %i", Pessoa.idade);
	printf("\ntelefone: %s", Pessoa.tel);
	printf("\nnome do dependente: %s", Pessoa.dep.nome);
	printf("\nidade do dependente: %i", Pessoa.dep.idade);
	printf("\ntelefone do dependente: %s", Pessoa.dep.tel);
	
}
