#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//Registro dados de uma pessoa

typedef struct compNotas{
	float at1;
	float at2;
	float at3;
	float NotaBim;
}compNotas;

typedef struct dadosAlunos{
	char nome[30];
	char email[50];
	char curso[30];
	char disciplina[30];
	int qtdFaltas;
	compNotas notas[2];
	float media;
	char status[4];
}dadosAlunos;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int qtdAlunos, i, j;
		
	printf("Qual a quantidade de Alunos: ");
	scanf("%d", &qtdAlunos);	
	fflush(stdin);
		
	dadosAlunos Alunos[qtdAlunos];
	
	for(i=0; i<qtdAlunos; i++){
		printf("\nDigite o nome do %i aluno: ", i+1);
		gets(Alunos[i].nome);
		fflush(stdin);
		printf("Digite o email do %i aluno: ", i+1);
		gets(Alunos[i].email);
		fflush(stdin);
		printf("Digite o curso do %i aluno: ", i+1);
		gets(Alunos[i].curso);
		fflush(stdin);
		printf("Digite a disciplina do %i aluno: ", i+1);
		gets(Alunos[i].disciplina);
		fflush(stdin);
		printf("Digite a Quantidade de Faltas do %i aluno: ", i+1);
		scanf("%d", &Alunos[i].qtdFaltas);
		fflush(stdin);		
		
		for(j=0; j<2; j++){
			printf("\n---Notas do %i Bimestre---\n", j+1);
			printf("Digite a nota da Atividade 1 do %i aluno: ", i+1);
			scanf("%f", &Alunos[i].notas[j].at1);		
			printf("Digite a nota da Atividade 2 do %i aluno: ", i+1);
			scanf("%f", &Alunos[i].notas[j].at2);		
			printf("Digite a nota da Atividade 3 do %i aluno: ", i+1);
			scanf("%f", &Alunos[i].notas[j].at3);
			fflush(stdin);
			
			Alunos[i].notas[j].NotaBim=
			(Alunos[i].notas[j].at1 + 
			Alunos[i].notas[j].at2 +
			Alunos[i].notas[j].at3);
		}
		
		Alunos[i].media=(
			Alunos[i].notas[0].NotaBim + 
			Alunos[i].notas[1].NotaBim)/2;
			
		if(Alunos[i].media>=7 && Alunos[i].qtdFaltas<15){
			strcpy(Alunos[i].status,"AP");//manupulação de String
			//função de copiar texto
		}else{
			if(Alunos[i].media>=3 && Alunos[i].qtdFaltas<15){
				strcpy(Alunos[i].status,"EX");
			}else{
				if(Alunos[i].media<3) strcpy(Alunos[i].status,"RPM");
				if(Alunos[i].qtdFaltas>15) strcpy(Alunos[i].status,"RPF");
				if(Alunos[i].media<3 && Alunos[i].qtdFaltas>15) strcpy(Alunos[i].status,"RPMF");				
			}
		}
	}
	
	for(i=0; i<qtdAlunos; i++){
		printf("\n\nNome do %i aluno: %s", i+1, Alunos[i].nome);
		printf("\nEmail do %i aluno: %s", i+1, Alunos[i].email);
		printf("\nCurso do %i aluno: %s", i+1, Alunos[i].curso);
		printf("\nDisciplina do %i aluno: %s", i+1, Alunos[i].disciplina);
		printf("\nQuantidade de Faltas do %i aluno: %i", i+1, Alunos[i].qtdFaltas);
		printf("\nNota 1Bim: %.1f", Alunos[i].notas[0].NotaBim);
		printf("\nNota 2Bim: %.1f", Alunos[i].notas[1].NotaBim);
		printf("\nMédia Final: %.1f", Alunos[i].media);		
		printf("\nStatus Final: %s", Alunos[i].status);		
	}	
}
