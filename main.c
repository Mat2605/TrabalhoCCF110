#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
typedef struct dados_agenda{
	char nome[50],email[60];
	int telefone;
}agenda;
typedef struct dados_local{
	char local[50],data[50];
	
}local;
void inicializar_struct(local *local,agenda *agenda){
		for(int i = 0;i<50;i++){
		agenda[i].telefone = 0;
		strcpy(agenda[i].email,"NULL");
		strcpy(agenda[i].nome,"NULL");
		strcpy(local[i].local,"NULL");
		strcpy(local[i].data,"NULL");
	}
}
//condicional1,condicional4,condicional5,condicional6,condicional7;comparar strings
void op1(agenda *agenda){
	char palavra[50] = "NULL";
	for(int i = 0;i<50;i++){
			if(strcmp(agenda[i].nome,palavra)){
				printf("\tTelefone: \n");
    			scanf("%d", &agenda[i].telefone);
    			printf("\tNome: \n");
    			scanf("%s",&agenda[i].nome);
    			printf("\tEmail: \n");
    			scanf("%s",&agenda[i].email);
				break;}}}
void op2(agenda *agenda){
	int telefone_de_busca;
	printf("\tDigite o telefone do contato: \n");
	scanf("%d",&telefone_de_busca);
	for(int j = 0;j<50;j++){
		if(telefone_de_busca==agenda[j].telefone){
			agenda[j].telefone = 0;
			strcpy(agenda[j].email,"NULL");
			strcpy(agenda[j].nome,"NULL");
			printf("\tContato eliminado!");
			break;
		}else{
			printf("\tNão encontrado!\n");
			break;}}}
void op3(agenda *agenda){
	int telefone_de_busca;
	printf("\tDigite o telefone do contato: \n");
	scanf("%d",&telefone_de_busca);
	for(int j = 0;j<50;j++){
		if(telefone_de_busca==agenda[j].telefone){
			printf("\tContato existe!\n");
			printf("\tContato: \n");
			printf("\t|Telefone: %d|Nome: %s|Email: %s\n",agenda[j].telefone,agenda[j].nome,agenda[j].email);
			break;
		}else{
			printf("\tContato não encontrado!\n");
			break;}}}
void op4(agenda *agenda){
	printf("\tLista de contatos: \n");
	for(int i=0;i<50;i++){
			if(agenda[i].telefone==0){
				printf("\tVazio\n");
			}else{
				printf("\t|Nome: %s|Telefone: %d|Email: %s\n",agenda[i].nome,agenda[i].telefone,agenda[i].email);
				}}}
void op5(local *local){
	char palavra[50]="NULL";
	int condicional5;
	for(int i = 0;i<50;i++){
		if(strcmp(local[i].local,palavra)){
			printf("\tDigite a data do evento: \n");
			scanf("%s",&local[i].local);
			printf("\tDigite o local do compromisso:\n ");
			scanf("%s",&local[i].data);
			break;}}}
void op6(local *local){
	char local_de_busca[50];
	printf("Digite o local do evento:\n ");
	scanf("%s",&local_de_busca);
	for(int i = 0;i<50;i++){
			if(strcmp(local_de_busca,local[i].local)){
				strcpy(local[i].local,"NULL");
				strcpy(local[i].data,"NULL");
				printf("\tContato removido!");
				break;}else{
					printf("\tContado não encontrado!\n");
					break;
				}}}
void op7(local *local){
	char palavra[50] = "NULL";
	for(int i = 0;i<50;i++){
		if(strcmp(local[i].local,palavra)){
			printf("\tData: %s,Local: %s\n",local[i].data,local[i].local);
		}else{
			printf("\tVazio\n");
			break;}}}
int main(){
	setlocale(LC_ALL,"Portuguese");
	agenda agenda[50];
	local local[50];
	int resposta;
	int x = 0;//controla o loop
	inicializar_struct(local,agenda);
	do{
	printf("\t[1] -> Adicionar contato;\n");
	printf("\t[2] -> Remover contato;\n");
	printf("\t[3] -> Buscar contato;\n");
	printf("\t[4] -> Ver Lista;\n");
	printf("\t[5] -> Adicionar Compromisso;\n");
	printf("\t[6] -> Remover Compromisso;\n");
	printf("\t[7] -> Ver lista de compromissos;\n");
	printf("\t[8] -> Sair;\n");
	scanf("%d",&resposta);
	switch(resposta){
		case 1:
			op1(agenda);
			break;
		case 2:
			op2(agenda);
			break;
		case 3:
			op3(agenda);
			break;
		case 4:
			op4(agenda);
			break;
		case 5:
			op5(local);
			break;
		case 6:
			op6(local);
			break;
		case 7:
			op7(local);

			break;
		case 8:
			x+=1;
			break;
			
	}}while(x==0);
	system("PAUSE");
	return 0;
}
