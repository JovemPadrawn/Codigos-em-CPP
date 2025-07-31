#include <stdio.h>
#include <locale.h>
#include <iostream>

int main(){
	int n;
	printf("Tua idade pae: ");
	scanf("%d", &n);
	if (n >= 18){
		printf("poe a mao na cabeça");
	} else if (n < 18){
		printf("ta liberado");
	} if (n >= 16){
		printf(" e faz o L");
	}
}
