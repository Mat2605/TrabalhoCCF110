#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int resposta,telefone_de_busca;
	char nome[50][30],local[50][50],data[50][11],email[50][30];
	int x = 0;//controla o loop
	int i = 0;
	int j = 0;
	int y,z = 1;
	int telefone[50];
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
    		printf("\tTelefone: \n");
    		scanf("%d", &telefone[i]);
    		printf("\tNome: \n");
    		scanf("%s",&nome[i]);
    		printf("\tEmail: \n");
    		scanf("%s",&email[i]);
			i++;
			break;
		case 2:
			printf("\tDigite o telefone do contato: \n");
			scanf("%d",&telefone_de_busca);
			for(int j = 0;j<i;j++){
				if(telefone_de_busca==telefone[j]){
				break;}}
			break;
		case 3:
			printf("\tDigite o telefone do contato: \n");
			scanf("%d",&telefone_de_busca);
			for(int j = 0;j<i;j++){
				if(telefone_de_busca==telefone[j]){
					y = j;
					z = 0;
				}else{
					continue;
				}
				
			}
			if(z==0){
				printf("\tContato existe!\n");
				printf("\tContato: \n");
				printf("\t|Telefone: %d|Nome: %s|\n",telefone[y],nome);
			}else if(z==1){
			printf("\tContato não existe!\n");}
			break;
		case 4:
			printf("\tLista de contatos: \n");
			for(int a = 0;a<i;a++){
				printf("\t|Nome: %s|Telefone: %d|Email: %s\n",nome[a],telefone[a],email[a]);
			}
			break;
		case 5:
			printf("\tDigite a data do evento: \n");
			scanf("%s",&data[j]);
			printf("\tDigite o local do compromisso:\n ");
			gets(local[j]);
			j++;
			break;
		case 6:
			printf("Digite o local do evento:\n ");
			break;
		case 7:
			x+=1;
			break;
			
	}}while(x==0);
	system("PAUSE");
	return 0;
}
