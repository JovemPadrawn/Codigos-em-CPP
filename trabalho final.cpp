#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

float passeIndividual = 0;
float pacote60 = 0;

char menu();
void cadastrar();
void consultar();
void alterar();
void excluir();
float venda();
void pagamento(int quantidade);

char menu() {
    char op;
    int quantidade;
    printf("\n--- MENU ---\n");
    printf("1. Cadastrar valor atual do passe.\n");
    printf("2. Consultar o valor do passe.\n");
    printf("3. Alterar o valor do passe.\n");
    printf("4. Excluir passe.\n");
    printf("5. Vender passe.\n");
    printf("6. Pagamento.\n");
    printf("7. Sair.\n");
    printf("Escolha uma opção: ");
    op = getch();
    printf("%c\n", op);

    switch (op) {
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
            quantidade = venda();
            break;
        case '6':
            pagamento(quantidade);
            break;
        default:
            if (op != '7') {
                printf("Opção inválida!\n");
            }
    }
    return op;
}

void cadastrar() {
	system("cls");
    printf("Definir valor do passe individual: ");
    scanf("%f", &passeIndividual);
    float desconto = (passeIndividual * 60) * 0.10;
    pacote60 = (passeIndividual * 60) - desconto;
    printf("Pacote de 60 passes com 10%% de desconto: %.2f\n", pacote60);
}

void consultar() {
	system("cls");
    printf("Valor do passe individual: %.2f\n", passeIndividual);
    printf("Valor do pacote com 60 passes (com desconto): %.2f\n", pacote60);
}

void alterar() {
	system("cls");
    printf("Digite o novo valor do passe individual: ");
    scanf("%f", &passeIndividual);
    float desconto = (passeIndividual * 60) * 0.10;
    pacote60 = (passeIndividual * 60) - desconto;
    printf("Valor alterado com sucesso!\n");
}

void excluir() {
	system("cls");
    passeIndividual = 0;
    pacote60 = 0;
    printf("Valores excluídos.\n");
}

float venda() {
	system("cls");
    int quantidade;
    printf("Digite a quantidade de passes desejada: ");
    scanf("%d", &quantidade);
    float total = quantidade * passeIndividual;
    printf("Valor total da venda: %.2f\n", total);
    return quantidade;
}

void pagamento(int quantidade) {
    int pagament;
    float valorseco, valorfinal, desconto;
    float pass = passeIndividual;

    printf("Escolha a forma de pagamento:\n");
    printf("1. Pix (5%% de desconto)\n");
    printf("2. Crédito (sem desconto)\n");
    printf("3. Débito (sem desconto)\n");
    printf("4. Dinheiro (5%% de desconto)\n");
    scanf("%d", &pagament);

    system("cls");

    valorseco = quantidade * pass;

    switch (pagament) {
        case 1: 
        case 4:
            if (quantidade == 60) {
                desconto = valorseco * 0.05 + valorseco * 0.10;
            } else {
                desconto = valorseco * 0.05;
            }
            valorfinal = valorseco - desconto;
            break;

        case 2:
        case 3:
            if (quantidade == 60) {
                desconto = valorseco * 0.10;
                valorfinal = valorseco - desconto;
            } else {
                valorfinal = valorseco;
            }
            break;

        default:
            printf("Forma de pagamento inválida.\n");
            return;
    }

    printf("Total a pagar: %.2f\n", valorfinal);
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    do {
        opcao = menu();
    } while (opcao != '7');

    printf("Programa encerrado.\n");
    return 0;
}
