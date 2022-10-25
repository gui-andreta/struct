/*
Faça um programa que receba o cadastro de
5 produtos e 5 clientes

Do produto deve se receber: codigo, nome e preço;
Do cliente deve se receber: nome e cpf
*/

#include <stdio.h>

int main(){

    typedef struct{
        int codigo;
        char nome_produto[50];
        float valor;
    } produto;

    typedef struct{
        char nome_cliente[50];
        int cpf;
    } cliente;

    cliente pessoa;
    produto item;

    int escolha;
    escolha = 0;

    while(escolha !=3){

        printf("Escolha uma das opcoes abaixo: \n\n");
        printf("1 -> Cadastro de Cliente\n");
        printf("2 -> Cadastro de Produto\n");
        printf("3 -> Encerrar Programa\n\n");

        printf("Qual opcao desejada? ");
        scanf("%i", &escolha);

        switch(escolha){
            case 1:
                //CADASTRO DE PESSOA
                printf("Digite o nome do cliente: ");
                scanf("%s", &pessoa.nome_cliente);

                printf("Digite o CPF do cliente: ");
                scanf("%i", &pessoa.cpf);

                break;

            case 2:
                //CADASTRO DE PRODUTO
                printf("Digite o nome do produto: ");
                scanf("%s", &item.nome_produto);

                printf("Digite o codigo do produto: ");
                scanf("%i", &item.codigo);

                printf("Digite valor do produto: ");
                scanf("%f", &item.valor);

                break;

            case 3:
                //SAIR DO LOOP
                printf("Volte sempre!");

                break;

            default:
                printf("Codigo invalido!");

                break;
        }

        if(escolha == 1){
            printf("\n\nAbaixo Cliente Cadastrado: \n\n");
            printf("Nome do Cliente: %s\n", pessoa.nome_cliente);
            printf("CPF do Cliente: %i\n\n", pessoa.cpf);
        }else if(escolha == 2){
            printf("\n\nAbaixo Produto Cadastrado: \n\n");
            printf("Nome do Produto: %s\n", item.nome_produto);
            printf("Codigo do Produto: %i\n", item.codigo);
            printf("Valor do Produto: %.2f\n", item.valor);
        }
    }
    
}