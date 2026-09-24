#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char escolhamenuprincipal;
	int escolhagce, escolhagf, escolhari, escolhaes;
	
	int cntrlvalidadedetalhes;
	
	char fornecedornome[100];
	double fornecedorcnpj;
	
	printf("Selecione a opcao que deseja realizar: \n1 - Gestao de Controle de Estoque \n2 - Gestao de Fornecedores \n3 - Relatorios e Indicadores\n");
	scanf("%c", &escolhamenuprincipal);

	switch(escolhamenuprincipal){
		case '1':
			printf("\n##Gestao de Controle de Estoque##\n");
			printf("1 - Entradas / Saidas \n2 - Quantidade em Estoque \n3 - Controle de Validade \n");
			scanf("%d", &escolhagce);
			
			//1.1
			if (escolhagce == 1 ){
				printf("\nENTRADAS / SAIDAS");
				
			}
			
			
			//1.2
			else if (escolhagce == 2){
				printf("\nQUANTIDADE EM ESTOQUE\n");
				printf("\n PAO - 30\n AGUA - 50\n ARROZ - 10\n FEIJAO - 8");
			}
			
			//1.3
			else if (escolhagce == 3) {
				
				printf("\nCONTROLE DE VALIDADE\n\n ITENS PARA VENCER NOS PROX\n 15 DIAS: 10\n 20 DIAS: 12\n 25 DIAS: 20\n 30 DIAS: 35");
				printf("Ver detalhes? (1: sim  0: nao)");
				scanf("%d", &cntrlvalidadedetalhes);
				if (cntrlvalidadedetalhes == 1){
					printf("aqui exibira uma lista mais detalhada dos prox vencimentos, com a qntd exata de dias");
				}
					
			}	 
			
			break;	
		
			
		case '2':
			printf("\n##Gestao de Fornecedores##\n");
			printf("1 - Cadastro de Fornecedores \n2 - Cotacao de Precos \n");
			scanf("%d", &escolhagf);
			
			
			//2.1
			if (escolhagf == 1){
				
				printf("\nCADASTRO DE FORNECEDORES\n");
				printf("Insira o nome do fornecedor: ");
				scanf(" %s", &fornecedornome);
				
				printf("Insira o cpnj do fornecedor: ");
				scanf(" %d", &fornecedorcnpj);
			
				printf("\nFORNECEDOR CADASTRADO: %s ", fornecedornome);
				printf("\nCNPJ DO FORNECEDOR CADASTRADO: %d", fornecedorcnpj);
			}
			
			//2.2
			else if (escolhagf == 2){
				printf("\nCOTACAO DE PRECOS\n");
			} 
			
			break;
		
		
		case '3':
			printf("\n##Relatorios e Indicadores\n");
			printf("1 - Custo de mercadorias \n2 - Desperdicio de Alimentos \n");
			scanf("%d", &escolhari);
			
			
			//3.1
			if (escolhari == 1){
				printf("\nCUSTO DE MERCADORIAS(30 dias)\n");	
			}
			
			//3.2
			else if (escolhari == 2){
				printf("\nDESPERDICIO DE ALIMENTOS(30 dias)\n");
				printf("\n ALIMENTOS DESCARTADOS POR FALTA DE VALIDADE: 10\n ALIMENTOS DESCARTADOS POR USO INADEQUADO: 5");
			}
			break;
			
			
			
	}
	
	return 0;
}
