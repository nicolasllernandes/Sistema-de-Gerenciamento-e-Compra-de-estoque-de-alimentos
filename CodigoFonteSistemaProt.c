#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char escolhamenuprincipal;
	int escolhagce, escolhagf, escolhari;
	
	printf("Selecione a opcao que deseja realiar: \n1 - Gestao de Controle de Estoque \n2 - Gestao de Fornecedores \n3 - Relatorios e Indicadores\n\n");
	scanf("%c", &escolhamenuprincipal);

	switch(escolhamenuprincipal){
		case '1':
			printf("\n##Gestao de Controle de Estoque##\n");
			printf("1 - Entradas / Saidas \n2 - Quantidade em Estoque \n3 - Controle de Validade \n");
			scanf("%d", &escolhagce);
			
			if (escolhagce = 1 ) {printf("ENTRADAS / SAIDAS");}
			else if (escolhagce = 2) {printf("QUANTIDADE EM ESTOQUE");}
			else if (escolhagce = 3) {printf("CONTROLE DE VALIDADE");}	 
			break;	
		
			
		case '2':
			printf("\n##Gestao de Fornecedores##\n");
			printf("1 - Cadastro de Fornecedores \n2 - Cotacao de Precos \n");
			scanf("%d", &escolhagf);
			
			if (escolhagf = 1) {printf("CADASTRO DE FORNECEDORES");}
			else if (escolhagf = 2) {printf("COTACAO DE PRECOS");}
			break;
		
		
		case '3':
			printf("\n##Relatorios e Indicadores\n");
			printf("1 - Custo de mercadorias \n2 - Desperdicio de Alimentos \n");
			scanf("%d", &escolhari);
			
			if (escolhari = 1) {printf("CUSTO DE MERCADORIAS");}
			else if (escolhari = 2) {printf("DESPERDICIO DE ALIMENTOS");}
			break;
			
	}
	
	return 0;
}