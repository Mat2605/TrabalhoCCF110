#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int resposta,telefone_de_busca;
	char nome[30],email[30],local[50],local_busca[50],data[11];
	int x = 0;//controla o loop
	int i = 0;
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
    		printf("Nome: ");
    		gets(nome);
    		printf("Email: ");
    		gets(email);
    		printf("Telefone: ");
    		scanf("%d", &telefone[i]);
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
					printf("\tO contato existe!\n");
					printf("\tContato: \n");
					printf("\t|Telefone: %d|Nome: %s|Email: %s|\n",telefone[i],nome,email);
				}
				
			}
			break;
		case 4:
			printf("\tLista de contatos: \n");
			for(int a = 0;a<i;a++){
				printf("\t|Nome: %s|Email: %s|Telefone: %d|\n",nome,email,telefone[a]);
			}
			break;
		case 5:
			printf("\tDigite a data do evento: \n");
			scanf("%s",&data);
			printf("\tDigite o local do compromisso:\n ");
			gets(local);
			break;
		case 6:
			printf("Digite o local do evento:\n ");
			gets(local_busca);
			break;
		case 7:
			x+=1;
			break;
			
	}}while(x==0);
	system("PAUSE");
	return 0;
}
