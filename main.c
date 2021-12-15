#include <stdio.h>
#include <stdlib.h>
struct contato{
	char nome[50];
	char email[50];
};
struct local
{ char local[50];
};
int main(){
	int resposta,data;
	struct local local[50];
	struct contato contato[50];
	int x = 0;//controla o loop
	int z = 50;
	int telefone[50] = {0};
	int dia[50], mes[50],ano[50];
	do{
	printf("\t[1] -> Adicionar contato;\n");
	printf("\t[2] -> Remover contato;\n");
	printf("\t[3] -> Buscar contato;\n");
	printf("\t[4] -> Ver Lista;\n");
	printf("\t[5] -> Adicionar Compromisso;\n");
	printf("\t[6] -> Remover Compromisso;\n");
	printf("\t[7] -> Sair;\n");
	scanf("%d",&resposta);
	switch(resposta){
		case 1:
			for(int i  =0;i<50;i++){
				if(telefone[i]==0){
				printf("\tDigite o nome:\n ");
				gets(contato[i].nome);
				printf("\tDigite o telefone:\n ");
				scanf("%d",&telefone[i]);
				printf("\tDigite o email:\n ");
				gets(contato[i].email);
				break;		
				}
			}
			break;
		case 2:
			printf("\tDigite o nome do contato: \n");
			break;
		case 3:
			printf("\tDigite o nome do contato: \n");
			break;
		case 4:
			printf("\tLista de contatos: \n");
			for(int i = 0;i<z;i++){
				if(telefone[i]!=0){
				printf("\t|[%d]Nome: %i|Email: %i|Telefone: %d|\n ",i+1,contato[i].nome,contato[i].email,telefone[i]);
			}else{
				printf("\t|Nome:---|Email:---|Telefone:---|");
			}}
			break;
		case 5:
			for(int i = 0;i<50;i++){
			if(dia[i]==0){
			printf("\tDigite a data do evento: \n");
			scanf("%d %d %d",&dia[i],&mes[i],&ano[i]);
			printf("\tDigite o local do compromisso:\n ");
			gets(local[i].local);
			break;}
			break;}
		case 6:
			printf("Digite a data do evento:\n ");
			break;
		case 7:
			x+=1;
			break;
			
	}}while(x==0);
	system("PAUSE");
	return 0;
}
