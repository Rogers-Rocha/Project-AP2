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

    }while(opcao < 1 || opcao > 4);

    return opcao;
} 

int submenu(){
    char opc[10];
    int opcao;
    fflush(stdin);

    printf("--------------Submenu----------------");
    printf("\n(1) - Cadastrar\n");
    printf("\n(2) - Listar Tudo\n");
    printf("\n(3) - Consultar\n");
    printf("\n(4) - Editar\n");
    printf("\n(5) - Excluir\n");
    printf("\n(6) - Voltar ao Menu Geral\n");
    printf("-----------------------------------");

    do{
        printf("\nDigite a sua opcao: ");
        fflush(stdout);
        fgets(opc, 10, stdin);

        opcao = atoi(opc);

    }while(opcao < 1 || opcao > 6);

    return opcao;
}

int Produtos(){
    int opcao;
    int cadP = 0;

    do{
        opcao = submenu();
        switch (opcao)
        {
        case 1:
            indP = CadastrarProdutos(indP, cadP);
            break;
        case 2:
            ListarProdutos();
            break;
        case 3:
            ConsultarProdutos();
            break;
        case 4:
            EditarProduto();
            break;
        case 5:
            ExcluirProduto();
            break;
        case 6:
            printf("\nSaindo da area de produtos...\n");
            break;
        default:
            printf("\nOpcao nao implementada.\n");
            break;
        }
    }while(opcao != 6);
    
}

int Clientes(){

}

int ControlarCaixa(){

}

int volt()
{
    int volt;
    printf("\nDeseja voltar ao menu? 1(sim), 2(nao): ");
    scanf("%d", &volt);
    getchar();

    switch (volt)
    {
    case 1:
        printf("\n");
        system("cls");
    case 2:
        system("cls");
        break;
    }

    return volt;
}

int main(){
    int opcao;
    
    do{
        opcao = menu();
        switch(opcao){
            case 1:
                Produtos();
                break;
            case 2:
                Clientes();
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