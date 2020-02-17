#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define QTD 10

//vetor de registro
typedef struct{
  	int matricula, idade, status, php, java, mobile;
  	char sexo, nome[30];
  } tipo_cadastro;

//variavel CAD que recebe constate QTD
tipo_cadastro CAD[QTD];

//declaração das funções
void ficha();
void editar();
void excluir();
void listar();

int main(int argc, char *argv[]){
	char opc;
 	 do{
  			printf("|------------------------------------------------------------------------------|\n");
			printf("|                               T.I CURSOS                                     |\n");
			printf("|------------------------------------------------------------------------------|\n");
			printf("\t\t\t|=====================|\n");
			printf("\t\t\t| 1 - CADASTRAR ALUNO |\n");
			printf("\t\t\t| 2 - EDITAR ALUNO    |\n");
			printf("\t\t\t| 3 - REMOVER ALUNO   |\n");
			printf("\t\t\t| 4 - LISTAGEM GERAL  |\n");
			printf("\t\t\t| s - SAIR            |\n");
			printf("\t\t\t|=====================|\n");
			printf("\n\tBy: Anderson Cezar - Jefferson Ferreira - Lucas Wallis - Jorge Diego\n\n\n");
			opc = getche();
			fflush(stdin);


			switch (opc){
				case '1':
					system("cls");
					printf("\t\t\t|=====================|\n");
					printf("\t\t\t|   CADASTRO DE ALUNO |\n");
					printf("\t\t\t|=====================|\n\n");
					ficha();
					printf("\n\n");
					system("pause");
					system("cls");
					break;

				case '2':
					system("cls");
					printf("\t\t\t|=====================|\n");
					printf("\t\t\t|      EDITAR ALUNO   |\n");
					printf("\t\t\t|=====================|\n\n");
					editar();
					system("pause");
					system("cls");
					break;

				case '3':
					system("cls");
					printf("\t\t\t|=====================|\n");
					printf("\t\t\t|     REMOVER ALUNO   |\n");
					printf("\t\t\t|=====================|\n\n");
					excluir();
					system("pause");
					system("cls");
					break;

				case '4':
					system("cls");
					printf("\t\t\t\t|=====================|\n");
					printf("\t\t\t\t|     LISTAR ALUNOS   |\n");
					printf("\t\t\t\t|=====================|\n\n");
					listar();
					system("pause");
					system("cls");
					break;
			}
  } while(opc != 's' && opc != 'S');//end do-while
}//end main

void ficha(){
	int matricula, i, idade, php, mobile, java;
  	char sexo, nome[30], op;

	printf("Nome: ");
	fgets(nome, 30, stdin);

	printf("Matricula: ");
	fflush(stdin);
	scanf("%d", &matricula);


	printf("Idade: ");
	fflush(stdin);
	scanf("%d", &idade);


	printf("Sexo 'M' ou 'F': ");
	fflush(stdin);
	scanf("%s", &sexo);

	printf("\n");
	printf("\t\t\t|---------------------------------|\n");
	printf("\t\t\t| Curso      | Turno | Mensalidade|\n");
	printf("\t\t\t|---------------------------------|\n");
	printf("\t\t\t| 1 - PHP    | Manha |  210,00R$  |\n");
	printf("\t\t\t| 2 -        | Noite |  260,00R$  |\n");
	printf("\t\t\t|---------------------------------|\n");
	printf("\t\t\t| 3 - Java   | Manha |  320,00R$  |\n");
	printf("\t\t\t| 4 -        | Noite |  390,00R$  |\n");
	printf("\t\t\t|---------------------------------|\n");
	printf("\t\t\t| 5 - Mobile | Manha |  290,00R$  |\n");
	printf("\t\t\t| 6 - Mobile | Noite |  310,00R$  |\n");
	printf("\t\t\t|---------------------------------|\n\n");

	op = getche();
	printf("\n\n");
	fflush(stdin);

	switch(op){
		case '1':
			if(idade > 45){
				   printf("Cadastrado no Curso PHP Manha %iR$", (210 / 100) * 15 + 210);
			}
			else {
				printf("Cadastrado no Curso PHP Manha %iR$", (210 / 100) * 15 + 210);
			}
			php++;
			break;
		case '2':
			if(idade > 45){
				   printf("Cadastrado no Curso PHP Noite %i", (260 / 100) * 15 + 260),"R$";
			}
			else {
				printf("Cadastrado no Curso PHP Noite %i", (260 / 100) * 15 + 260),"R$";
			}
			php++;
			break;
		case '3':
			if(idade > 45){
				   printf("Cadastrado no Curso Java Manha%iR$", (320 / 100) * 15 + 320);
			}
			else {
				printf("Cadastrado no Curso Java Manha %iR$", (320 / 100) * 15 + 320);
			}
			java++;
			break;
		case '4':
			if(idade > 45){
				   printf("Cadastrado no Curso Java Noite %iR$", (290 / 100) * 15 + 290);
			}
			else {
				printf("Cadastrado no Curso Java Noite %iR$", (290 / 100) * 15 + 290);
			}
			java++;
			break;
		case '5':
			if(idade > 45){
				   printf("Cadastrado no Curso Mobile Manha %iR$", (210 / 100) * 15 + 210);
			}
			else {
				printf("Cadastrado no Curso Mobile Manha %iR$", (210 / 100) * 15 + 210);
			}
			mobile++;
			break;
		case '6':
			if(idade > 45){
				   printf("Cadastrado no Curso Mobile Manha %iR$", (310 / 100) * 15 + 310);
			}
			else {
				printf("Cadastrado no Curso Curso Mobile Manha %iR$", (310 / 100) * 15 + 310);
			}
			mobile++;
			break;
	}//end switch

	for(i = 0; i < QTD; i++){
		if(CAD[i].status == 0){
				CAD[i].matricula = matricula;
				CAD[i].idade = idade;
				CAD[i].sexo = sexo;
				strcpy(CAD[i].nome, nome);
				CAD[i].status = 1;


				if(php == 1){
					CAD[i].php = 1;
				}

				else if(java == 1){
					CAD[i].java = 1;
				}

				else if(mobile == 1){
					CAD[i].mobile = 1;
				}

				break;
		}//end if
	}//end for
}//end ficha

void editar(){
	int comp, i;

	printf("Matricula do Aluno: ");
	scanf("%d", &comp);
	fflush(stdin);

	   for(i = 0; i < QTD; i++){
		   if(CAD[i].matricula == comp){
 	  	   	    int matricula, idade;
			  	char sexo, nome[30];

				printf("Nome: ");
				fgets(nome, 30, stdin);

				printf("Matricula: ");
				fflush(stdin);
				scanf("%d", &matricula);


				printf("Idade: ");
				fflush(stdin);
				scanf("%d", &idade);


				printf("Sexo 'M' ou 'F': ");
				fflush(stdin);
				scanf("%s", &sexo);

				CAD[i].idade = idade;
				CAD[i].matricula = matricula;
				strcpy(CAD[i].nome, nome);
				CAD[i].sexo = sexo;
				printf("\n\nCADASTRO Atualizado!");

				break;
		   }//end if
	   }//end for
}//end editar

void listar(){
	int i;
	for(i = 0; i < QTD; i++){
		if(CAD[i].status == 1){
				printf("\t\t|------------------------------------------------------------|\n");
			    printf("\t\t  Nome = %s                                                   \n", CAD[i].nome);
				printf("\t\t  Idade = %d                                                  \n", CAD[i].idade);
				printf("\t\t  Matricula = %d                                              \n", CAD[i].matricula);
				printf("\t\t  Sexo = %c                                                   \n", CAD[i].sexo);

				if(CAD[i].php == 1){
					printf("\t\t  Aluno Cadastrado no Curso de PHP!\n");
				}

				else if(CAD[i].java == 1){
					printf("\t\t  Aluno Cadastrado no Curso de Java!\n");
				}

				else if(CAD[i].mobile == 1){
					printf("\t\t  Aluno Cadastrado no Curso de Mobile!\n");
				}

				printf("\t\t|------------------------------------------------------------|\n\n");
		}
	}//end while
}//end listar

void excluir(){
	int cod, i;
	printf("Matricula a ser removida: ");
	scanf("%d", &cod);

	for(i = 0; i < QTD; i++){
		   if(cod == CAD[i].matricula){
			      CAD[i].status = 0;
			      printf("\n\n Aluno Removido ");
		   }
	}
}
