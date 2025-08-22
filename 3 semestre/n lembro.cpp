#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int op=0;
	while(op!=5){	
		printf("\n------------------");
		printf("\n1 - Inserir Dados");
		printf("\n2 - Alterar Dados");
		printf("\n3 - Listar Dados");	
		printf("\n4 - Deletar Dados");	
		printf("\n5 - Sair");
		printf("\n------------------");
		printf("\nDigite uma opção: ");
		scanf("%d", &op);	
		system("cls");
		
		switch(op){
			case 1:{ 
				printf("\nOpção de Inserir Dados");
				break;
			}
			case 2:{ 
				printf("\nOpção de Alterar Dados");
				break;
			}
			case 3:{ 
				printf("\nOpção de Listar Dados");
				break;
			}
			case 4:{ 
				printf("\nOpção de Deletar Dados");
				break;
			}
			case 5:{ 
				printf("\nSaindo do Sistema....");
				break;
			}
			default: {
				printf("\nOpção inválida....");
				break;
			}
		}
	}	
}