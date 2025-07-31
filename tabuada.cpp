#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i, numero;
	printf("fala um numero pae: ");
	scanf("%d", &numero);
	for (i=1;i<=10;i++){
		printf("%d x %d = %d\n",numero, i, numero*i);
	}
}
