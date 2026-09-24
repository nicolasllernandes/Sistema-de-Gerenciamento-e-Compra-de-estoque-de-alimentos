#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char escolhamenuprincipal;
	int escolhagce, escolhagf, escolhari, escolhaes;
	
	int cntrlvalidadedetalhes;
	
	char fornecedornome[100];
	double fornecedorcnpj;

	char novoitem1[20];
    char novoitem2[20];
    int qntditem1, qntditem2, entradasaidan;
	
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
				printf("\n ENTRADAS:\n ARROZ: 25\n FEIJAO: 32\n\n SAIDAS:\n AGUA: 10\n");
                printf("\nSelecione uma opcao:\n1-Cadastrar novo item\n2-Retornar ao menu\n");

                scanf("%d", &escolhaes);
                if (escolhaes == 1){
                    printf("Digite o nome do item: ");
                    scanf("%s", &novoitem1);
                    printf("Quantas unidades deste item?");
                    scanf("%d", &qntditem1);
                    printf("O item esta entrando ou saindo? (digite 1 para entrando e 0 para saindo)\n\n");
                    scanf("%d", &entradasaidan);

                    if (entradasaidan == 1){
                        printf("ENTRADAS / SAIDAS\n ENTRADAS:\n ARROZ: 25\n FEIJAO: 32\n ");
                        printf(novoitem1);
                        printf(" %d", qntditem1);
                        printf("\n\n SAIDAS: \n AGUA: 10\n ");
                    }
                    else if (entradasaidan == 0){
                        printf("ENTRADAS / SAIDAS\n ENTRADAS:\n ARROZ: 25\n FEIJAO: 32\n\n SAIDAS: \n AGUA: 10\n ");
                        printf(novoitem1);
                        printf(" %d", qntditem1);
					}
				}
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
				printf("\n PAO - RS11.30\n AGUA - RS1.50\n ARROZ - RS7.20\n FEIJAO - RS7.50");
			} 
			
			break;
		
		
		case '3':
			printf("\n##Relatorios e Indicadores\n");
			printf("1 - Custo de mercadorias \n2 - Desperdicio de Alimentos \n");
			scanf("%d", &escolhari);
			
			
			//3.1
			if (escolhari == 1){
				printf("\nCUSTO DE MERCADORIAS(30 dias)\n");	
				printf("\n AGUA MINERAL - QNTD: 100 - TOTAL: RS270.65\n ARROZ BRANCO - QNTD: 50 - TOTAL: RS392.87\n FEIJAO - QNTD: 40 - TOTAL: 315.14");
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
