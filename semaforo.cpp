#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int it, val, menu;
	printf(" 1 comprar.\n");
	printf(" 2 sair.\n");
	fflush (stdin);
	menu = getch();
	switch (menu){
		case '1':
			system("cls");
			printf("quantos itens voce quer comprar: \n");
			printf("valor de cada item     --------------   50$\n");
			scanf("%d", &it);
			val = it * 50;
			printf("itens comprados: %d, valor: %d\n", it, val);
			break;
		case '2':
			system("cls");
			printf("ate um outro dia!");
			break;
		default:
			printf("error");
	}
	
}
