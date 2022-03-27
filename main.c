#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
typedef struct dados_agenda{
	char nome[50],email[50];
	int telefone;
}agenda;
typedef struct dados_local{
	char local[50];
	char data[50];
	
}local;
void inicializar_struct(local *local,agenda *agenda){
		for(int i = 0;i<25;i++){
		agenda[i].telefone = 0;
		strcpy(agenda[i].email,"NULL");
		strcpy(agenda[i].nome,"NULL");
		strcpy(local[i].local,"NULL");
		strcpy(local[i].data,"NULL");
	}
}
void op1(agenda *agenda){//Adicionar Contato
	char palavra[50];
	strcpy(palavra,"NULL");
	for(int i = 0;i<25;i++){
			int reg = strcmp(agenda[i].nome,palavra);
			if(reg==0){
				printf("\tTelefone: \n");
    			scanf("%d", &agenda[i].telefone);
    			printf("\tNome: \n");
    			scanf("%s",&agenda[i].nome);
    			printf("\tEmail: \n");
    			scanf("%s",&agenda[i].email);
				break;}}}
void op2(agenda *agenda){//Remover Contato
	int telefone_de_busca;
	printf("\tDigite o telefone do contato: \n");
	scanf("%d",&telefone_de_busca);
	for(int j = 0;j<25;j++){
		if(telefone_de_busca==agenda[j].telefone){
			agenda[j].telefone = 0;
			strcpy(agenda[j].email,"NULL");
			strcpy(agenda[j].nome,"NULL");
			printf("\tContato eliminado!");
			break;
		}else{
			printf("\tNão encontrado!\n");
			break;}}}
void op3(agenda *agenda){//Buscar Contato
	int telefone_de_busca;
	printf("\tDigite o telefone do contato: \n");
	scanf("%d",&telefone_de_busca);
	for(int j = 0;j<25;j++){
		if(telefone_de_busca==agenda[j].telefone){
			printf("\tContato existe!\n");
			printf("\tContato: \n");
			printf("\t|Telefone: %d|Nome: %s|Email: %s\n",agenda[j].telefone,agenda[j].nome,agenda[j].email);
			break;
		}else{
			printf("\tContato não encontrado!\n");
			break;}}}
void op4(agenda *agenda){//Mostra a Lista de Contatos
	printf("\tLista de contatos: \n");
	for(int i=0;i<25;i++){
			if(agenda[i].telefone==0){
				printf("\tVazio\n");
			}else{
				printf("\t|Nome: %s|Telefone: %d|Email: %s\n",agenda[i].nome,agenda[i].telefone,agenda[i].email);
				}}}
void op5(local *local){//Adicionar Evento
	char palavra[50];
	strcpy(palavra,"NULL");
	for(int i = 0;i<25;i++){
		int condicional5 = strcmp(local[i].local,palavra);
		if(condicional5==0){
			printf("\tDigite a data do evento: \n");
			scanf("%s",&local[i].local);
			printf("\tDigite o local do compromisso:\n ");
			scanf("%s",&local[i].data);
			break;}}}
void op6(local *local){//Remover Evento
	char local_de_busca[50];
	int x = 0;
	printf("Digite o local do evento:\n ");
	scanf("%s",&local_de_busca);
	for(int i = 0;i<25;i++){
		int reg =strcmp(local_de_busca,local[i].local);
			if(reg==0){
				strcpy(local[i].local,"NULL");
				strcpy(local[i].data,"NULL");
				printf("\tContato removido!");
				x = 1;
				break;}
				}if(x==0){
					printf("\tContado não encontrado!\n");
				}
				}
void op7(local *local){//Mostra a Lista de eventos
	char palavra[50];
	strcpy(palavra,"NULL");
	for(int i = 0;i<25;i++){
		int reg = strcmp(local[i].local,palavra);
		if(reg==0){
			printf("\tVazio\n");
		}else{
			printf("\tData: %s,Local: %s\n",local[i].data,local[i].local);
			}}}
int main(){
	setlocale(LC_ALL,"Portuguese");
	agenda agenda[25];
	local local[25];
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
	FILE *lista_completa;//Escrevendo Todos os dados passados pelo usuário
	if((lista_completa = fopen("agenda.txt","w+"))==NULL){
		printf("\tNão foi possível abrir um arquivo!\n");
	}else{
		for(int i = 0;i<25;i++){
			fprintf(lista_completa,"|Nome: %s|",agenda[i].nome);
			fprintf(lista_completa,"Email: %s|",agenda[i].email);
			fprintf(lista_completa,"Telefone: %d|",agenda[i].telefone);
			fprintf(lista_completa,"Local Registrado: %s|",local[i].local);
			fprintf(lista_completa,"Data do evento: %s|\n\n\n\n",local[i].data);
		}
	}
	fclose(lista_completa);
	system("PAUSE");
	return 0;
}
