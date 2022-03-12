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
int main(){
	setlocale(LC_ALL,"Portuguese");
	agenda agenda[50];
	local local[50];
	char local_de_busca[50];
	for(int i = 0;i<50;i++){
		agenda[i].telefone = 0;
		strcpy(agenda[i].email,"NULL");
		strcpy(agenda[i].nome,"NULL");
		strcpy(local[i].local,"NULL");
		strcpy(local[i].data,"NULL");
	}
	int resposta,telefone_de_busca;
	int x = 0;//controla o loop
	int j = 0;
	int z;//opção 3,existencia ou não do contato 
	char palavra[50] = "NULL";
	int condicional1,condicional4,condicional5,condicional6,condicional7;//comparar strings
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
			for(int i = 0;i<50;i++){
				condicional1 = strcmp(agenda[i].nome,palavra);
				if(condicional1==0){
				printf("\tTelefone: \n");
    			scanf("%d", &agenda[i].telefone);
    			printf("\tNome: \n");
    			scanf("%s",&agenda[i].nome);
    			printf("\tEmail: \n");
    			scanf("%s",&agenda[i].email);
				break;
			}}
			break;
		case 2:
			printf("\tDigite o telefone do contato: \n");
			scanf("%d",&telefone_de_busca);
			for(int j = 0;j<50;j++){
				if(telefone_de_busca==agenda[j].telefone){
					agenda[j].telefone = 0;
					strcpy(agenda[j].email,"NULL");
					strcpy(agenda[j].nome,"NULL");
					printf("\tContato elininado!");
					break;
				}else{
					printf("\tNão encontrado!\n");
				}}
			break;
		case 3:
			printf("\tDigite o telefone do contato: \n");
			scanf("%d",&telefone_de_busca);
			for(int j = 0;j<50;j++){
				if(telefone_de_busca==agenda[j].telefone){
				printf("\tContato existe!\n");
				printf("\tContato: \n");
				printf("\t|Telefone: %d|Nome: %s|Email: %s\n",agenda[j].telefone,agenda[j].nome,agenda[j].email);
				z=1;
				break;
				}else{
					continue;
				}
				if(z!=1){
					printf("\tContato não existe\n");
				}
				
			}
			break;
		case 4:
			printf("\tLista de contatos: \n");
			for(int i=0;i<50;i++){
				condicional4 = strcmp(agenda[i].nome,palavra);
				if(condicional4==1){
				printf("\t|Nome: %s|Telefone: %d|Email: %s\n",agenda[i].nome,agenda[i].telefone,agenda[i].email);
			}else{
				printf("\tVazio\n");
			}
			}
			break;
		case 5:
			for(int i = 0;i<50;i++){
				condicional5 = strcmp(local[i].local,palavra);
				if(condicional5==0){
				printf("\tDigite a data do evento: \n");
				scanf("%s",&local[i].local);
				printf("\tDigite o local do compromisso:\n ");
				scanf("%s",&local[i].data);
				break;}}
				break;
		case 6:
			printf("Digite o local do evento:\n ");
			scanf("%s",&local_de_busca);
			for(int i = 0;i<50;i++){
				condicional6 = strcmp(local_de_busca,local[i].local);
				if(condicional6==0){
					strcpy(local[i].local,"NULL");
					strcpy(local[i].data,"NULL");
					printf("\tContato removido!");
					break;
				}
			}
			break;
		case 7:
			for(int i = 0;i<50;i++){
				condicional7 = strcmp(palavra,local[i].local);
				if(condicional7==1){
					printf("\tData: %s,Local: %s\n",local[i].data,local[i].data);
				}else{
					printf("\tVazio!");
				}
			}
			break;
		case 8:
			x+=1;
			break;
			
	}}while(x==0);
	system("PAUSE");
	return 0;
}
	
