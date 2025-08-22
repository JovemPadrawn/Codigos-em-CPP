#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
	
	int mat[10][10];
	int l, c, i, n1, n2, tabuada;
	
	for(l=0;l<10;l++){
		for(c=0;c<9;c++){
			mat[l][c]=(l+1*c+1);
		}
	}
	for(l=0;l<10;l++){
		printf("\n\n");
		for(c=0;c<9;c++){
			printf("\n%i x %i = %i", l+1, c+1, mat[l][c]);
		}
	}
}
