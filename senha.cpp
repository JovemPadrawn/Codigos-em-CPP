#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int num;
	char lado;
	printf("lado: ");
	fflush (stdin);
	scanf("%c", &lado);
	printf("numero: ");
	scanf("%d", &num);
	if ((lado == 'd' || lado == 'D') && (num == 10)){
		printf("lado: ");
		fflush (stdin);
		scanf("%c", &lado);
		printf("numero: ");
		scanf("%d", &num);
		if ((lado == 'e' || lado == 'E') && (num == 60)){
			printf("lado: ");
			fflush (stdin);
			scanf("%c", &lado);
			printf("numero: ");
			scanf("%d", &num);
			if ((lado == 'd' || lado == 'D') && (num == 45)){
				printf("\nPorta destravada!");
			} else {
				printf("190 acionado!");
			}
		} else {
			printf("190 acionado!");
		}
	} else {
		printf("190 acionado!");
	}
}
