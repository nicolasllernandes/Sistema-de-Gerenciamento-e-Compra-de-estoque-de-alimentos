#include <stdio.h>
#include <stdlib.h>

int opcao;
int escolha;

char nomes[200][100];

float quantidades[200];

int unidades[200];

int dia_validade[200];
int mes_validade[200];
int ano_validade[200];

int total_lotes = 0;

void gestao_controle_estoque (void){
    
    

    printf("\n##Gestao de Controle de Estoque##\n");
    printf("1 - Entradas / Saidas \n2 - Quantidade em Estoque \n3 - Controle de Validade \n");
    scanf("%d", &escolha);

    //1.1
    if (escolha == 1 ){
    	int i;
    	
        printf("Deseja adicionar entrada(1), saida(2) ou Ver lista(3)?");
        scanf("%d", &escolha);

        if(escolha == 1){
            //Cadastro de um novo lote
            printf("Insira o nome do alimento:\n");
            scanf("%99s", nomes[total_lotes]);
            
            printf("Insira a quantidade que entrou:\n");
            scanf("%f", &quantidades[total_lotes]);
            
            printf("Selecione a unidade: \n");
            printf("1 - Quilograma\n");
            printf("2 - Litro\n");
            printf("3- Unidade\n");
            scanf("%d", &unidades[total_lotes]);
            
            printf("Insira a data de validade (DD/MM/AAAA):\n");
			scanf("%d/%d/%d", &dia_validade[total_lotes], &mes_validade[total_lotes], &ano_validade[total_lotes]);
           	
           	total_lotes++;
           	
           	printf("\nLote cadastrado com sucesso!\n");
        }

        if (escolha == 2){
        	
        }

        if(escolha == 3){
		
			
        }




    }
}


void gestao_fornecedores (void){
		    
    char nome_fornecedor [400][400];
    char cnpj_fornecedor [400][8];

    printf("\n##Gestao de Fornecedores e Compra##\n");
    printf("1 - Cadastro de Fornecedores \n2 - Cotacao de Precos \n");
    scanf("%d", &escolha);

    //1.1
    if (escolha == 1 ){
    	int i;
		static int ifixo = 0;
        printf("Deseja \nCadastrar novos fornecedores(1)\nVer lista de fornecedores ja cadastrados(2)?");
        scanf("%d", &escolha);

        if(escolha == 1){
            
            int escolhaunica = 1;

            do{
			
            printf("Insira o nome do fornecedor a ser contabilizado:\n");
            scanf(" %s", nome_fornecedor[ifixo]);


            printf("Insira o cnpj desse novo fornecedor: \n");
            scanf("%s", &cnpj_fornecedor[ifixo]);

            ifixo = ifixo + 1;
			
            printf("Deseja cadastrar o proximo item(1) ou parar(2)?\n");
            scanf(" %d", &escolhaunica);
            }
                while(escolhaunica != 2);

        }

        if(escolha == 2){
			printf("\n\n#FORNECEDORES:\n");
        	for (i = 0 ; i < ifixo; i++){
        		printf("%s %s \n", nome_fornecedor[i],cnpj_fornecedor[i]);}
			
        }

    }
}


void relatorios_indicadores (void){

}





int main(int argc, char *argv[]) {

    do {
        printf("\n================================================\n");
        printf("SISTEMA DE GERENCIAMENTO DE ESTOQUE DE ALIMENTOS");
        printf("\n================================================\n");
        printf("Selecione a opcao que deseja realizar:  \n1 - Gestao de Controle de Estoque \n2 - Gestao de Fornecedores \n3 - Relatorios e Indicadores\n0 - Encerrar o programa\n");
        scanf("%d", &opcao);
        switch (opcao){

            case 1:
                gestao_controle_estoque();
                break;


            case 2:
                gestao_fornecedores();
                break;


            case 3:
                relatorios_indicadores();
                break;


            case 0:
                printf("\nEncerrando o programa...\n");
                break;



        }
    }
        while (opcao != 0);
}
