#include <stdio.h>
#include <stdlib.h>

int opcao;
int escolha;

int gestao_controle_estoque (escolha){

    char tabela_entrada[200][2];
    char tabela_saida[200][2];

    printf("\n##Gestao de Controle de Estoque##\n");
    printf("1 - Entradas / Saidas \n2 - Quantidade em Estoque \n3 - Controle de Validade \n");
    scanf("%d", &escolha);

    //1.1
    if (escolha == 1 ){
        printf("Deseja adicionar entrada(1), saida(2) ou Ver tabela(3)?");
        scanf("%d", &escolha);

        if(escolha == 1){

            printf("Insira o nome do item a ser contabilizado:\n");
            scanf(" %c", &tabela_entrada[i][1]);
            





            printf("Insira a quantidade desse item que entrou: \n");
            scanf(" %c", &tabela_entrada[i][2];

            
            printf("Deseja cadastrar o próximo item(1) ou parar(2)?");
            scanf("%d",&escolha);
            if (escolha==1){

            }
        }

        if (escolha == 2){
            printf("2");
        }

        if(escolha == 3){
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
