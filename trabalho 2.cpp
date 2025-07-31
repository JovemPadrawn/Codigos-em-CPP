#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

char menu();
float cadastrar();
float consultar();
float alterar();
float excluir();
int venda();
float pagamento();

char menu(){
	// ALUNO: VICTOR BARRETO
	
	char op;
	printf("1. Cadastrar valor atual do passe.\n");
	printf("2. Consultar o valor do passe.\n");
	printf("3. Alterar o valor do passe.\n");
	printf("4. Excluir passe.\n");
	printf("5. vender passe.\n");
	printf("6. pagamento.\n");
    printf("7. sair.\n");
    fflush (stdin);
    op = getch();
    switch (op){
    	case '1':
    		cadastrar();
    		break;
    	case '2':
    		consultar();
    		break;
    	case '3':
    		alterar();
    		break;
    	case '4':
    		excluir();
    		break;
    	case '5':
    		venda();
    		break;
    	case '6':
    		pagamento();
    		break;
	}
	return op;
}

float cadastrar (){
	// ALUNO: Nickolas
	float pass, resultado, resultadocomdesconto, pass60;
	printf("Definir valor do passe individual: ");
	scanf("%f", &pass);
	resultado = pass * 60;
	resultadocomdesconto = resultado * 10 / 100;
	pass60 = resultado - resultadocomdesconto;
	printf("\nPacote de 60 passes com desconto: %.2f", pass60);
	return pass, pass60;
}

float consultar(float pass, float pass60){
	// ALUNO: Bruno
	printf("\nBem vindo ao menu de consulta. \nO valor do passe individual é %.2f. O valor do pacote com 60 unidades é %.2f.", pass, pass60);
}

float alterar(){
	float pass;
	// ALUNO: VICTOR BARRETO
	
  printf("Definir um novo valor do passe:\n");
  scanf("%f", &pass);
  return pass;
}

float excluir(){
	// ALUNO: Bruno
	pass = 0;
	return pass;
}

int venda(){
	// ALUNO: Nickolas
	
	int quantidade;
	printf("Digite a quantidade de passes desejada: ");
	scanf("%d", &quantidade);
	return quantidade;
}

int main(){
	// ALUNO: Nickolas
	setlocale (LC_ALL, "Portuguese");
	do { menu();
	}while (op != 7);
	return 0;
}
