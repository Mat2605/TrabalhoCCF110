#include <stdio.h>
#include <stdlib.h>
int main(){
	int resposta,data;
	char nome[50],email[50],local[50];
	int x = 0;//controla o loop
	int z = 0;
	int i = 0;
	int telefone[50];
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
			printf("\tDigite o nome:\n ");
			gets(nome);
			printf("\tDigite o telefone:\n ");
			scanf("%d",&telefone[i]);
			printf("\tDigite o email:\n ");
			gets(email);
			i++;
			break;
		case 2:
			printf("\tDigite o nome do contato: \n");
			break;
		case 3:
			printf("\tDigite o nome do contato: \n");
			break;
		case 4:
			printf("\tLista de contatos: \n");
			break;
		case 5:
			printf("\tDigite a data do evento: \n");
			scanf("%d %d %d",&dia[z],&mes[z],&ano[z]);
			printf("\tDigite o local do compromisso:\n ");
			gets(local);
			z++;
			break;
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
