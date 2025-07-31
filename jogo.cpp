#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	char mov;
	fflush (stdin);
	mov = getch();
	//scanf ("%c", &mov);
	switch (mov){
		case 'a':
			printf("esquerda.");
			break;
		case 'd':
			printf("direita.");
			break;
		case 's':
			printf("baixo.");
			break;
		case 'w':
			printf("cima.");
			break;
		default:
			printf("error");
	}
}
