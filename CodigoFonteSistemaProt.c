#include <stdio.h>
#include <stdlib.h>

int opcao;
int escolha;

int gestao_controle_estoque (escolha){
    
    char nomes_entrada [200][200];
    char valores_entrada[200][8];
    char valores_saida[200][8];

    printf("\n##Gestao de Controle de Estoque##\n");
    printf("1 - Entradas / Saidas \n2 - Quantidade em Estoque \n3 - Controle de Validade \n");
    scanf("%d", &escolha);

    //1.1
    if (escolha == 1 ){
		static int ifixo = 0;
		static int jfixo = 0 ;
        printf("Deseja adicionar entrada(1), saida(2) ou Ver tabela(3)?");
        scanf("%d", &escolha);

        if(escolha == 1){
            
            int escolhaunica = 1;

            do{
			
            printf("Insira o nome do item a ser contabilizado:\n");
            scanf(" %s", nomes_entrada[ifixo]);


            printf("Insira a quantidade desse item que entrou: \n");
            scanf("%s", &valores_entrada[ifixo]);

            ifixo = ifixo + 1;
			
            printf("Deseja cadastrar o proximo item(1) ou parar(2)?\n");
            scanf(" %d", &escolhaunica);
            }
                while(escolhaunica != 2);

        }

        if (escolha == 2){
            printf("2");
        }

        if(escolha == 3){printf("TABELA\n\n\n");
        	for (i = 0 ; i < ifixo; i++){
        		printf("%s", nomes_entrada[i]);
			}
        }




    }
}


int gestao_fornecedores (escolha_ge){

}


int relatorios_indicadores (escolha_ri){

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
