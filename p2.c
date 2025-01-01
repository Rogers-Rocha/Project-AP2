#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int indP = 0;
int indC = 0;


int menu(){
    char opc[10];
    int opcao;
    fflush(stdin);

    printf("--------------Menu----------------");
    printf("\n(1) - Area dos Produtos\n");
    printf("\n(2) - Area dos Clientes\n");
    printf("\n(3) - Controle de Caixa\n");
    printf("\n(4) - Sair\n");
    printf("-----------------------------------");

    do{
        printf("\nDigite a sua opcao: ");
        fflush(stdout);
        fgets(opc, 10, stdin);

        opcao = atoi(opc);

    } while (opcao < 1 || opcao > 4);

    return opcao;
} 

int main(){
    int opcao;
    int cadP = 0, cadC = 0;

    do{
        opcao = menu();
        switch(opcao){
            case 1:
                indC = Produtos(indC, cadC);
                break;
            case 2:
                indP = Clientes(indP, cadP);
                break;
            case 3:
                ControlarCaixa();
                break;
            case 4:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpcao nao implementada.\n");
                break;
            }
    }while(opcao != 4);

    system("PAUSE");
    return 0;
}