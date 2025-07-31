#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i, numero;
	i = 1;
	printf("aperte 1 para iniciar! : ");
	scanf("%d", &numero);
	while (numero == 1){
		if (i == 60){
			break;
		} else {
			printf ("O---o\n");
			Sleep (50);
			printf (" O-o\n");
			Sleep (50);
			printf ("  O\n");
			Sleep (50);
			printf (" o-O\n");
			Sleep (50);
			printf ("o---O\n");
			Sleep (50);
			i++;
		}
	}
}

