#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
	//matriz
	//multidimensional
	//2 dimensoes
	//linha e coluna
	//estrutura homogenea
	int mat[4][6]; // declaração
	int l, c;
	
	for(l=0;l<4;l++){ //linhas
		for(c=0;c<6;c++){ //colunas
			printf("Digite um valor: ");
			scanf("%d", &mat[l][c]);
		}
	}
	
	for(l=0;l<4;l++){ //linhas
		for(c=0;c<6;c++){ //colunas
			printf("\nValor digitado: %i", mat[l][c]);
		}
	}

}
