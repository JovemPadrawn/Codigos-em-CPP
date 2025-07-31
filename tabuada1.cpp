#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i, numero;
	i = 1;
	printf("fala um numero pae: ");
	scanf("%d", &numero);
	while (i<=10){
		printf("%d x %d = %d\n",numero, i, numero*i);
		i++;
	}
}

