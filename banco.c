#include <stdio.h>
#include <string.h>

//modelo (struct)
typedef struct{
    int numero;
    char titular[50];
    float saldo;
} Conta;

//funcao deposito
void depositarDinheiro(Conta *f){
    float deposito;
    printf("Digite o valor que deseja depositar: ");
    scanf("%f", &deposito);

    if(deposito <= 0){
        printf("Não foi possivel realizar o deposito!\n");
    } else {
        f->saldo += deposito;
        printf("Deposito realizado com sucesso!\n");
    }
}

//funcao saque
void sacarDinheiro(Conta *f){
    float saque;
    printf("Digite o valor que deseja sacar: ");
    scanf("%f", &saque);

    if(saque <= 0 || saque > f->saldo){
        printf("Não foi possivel sacar!\n");
    } else {
        f->saldo -= saque;
        printf("Saque realizado com sucesso!\n");
    }
}

//funcao para exibir saldo
void exibirSaldo(Conta f){
    printf("\nTitular: %s\n", f.titular);
    printf("Numero: %d\n", f.numero);
    printf("Saldo: R$ %.2f\n", f.saldo);
}

int main()
{
    //criando uma conta
    Conta c1;

    c1.numero = 1980483;
    strcpy(c1.titular, "Pablo");
    c1.saldo = 3000.0;

    int opcao = 0;
    
    //menu do sistema bancario
    while(opcao != 4){
        printf("\n=== BEM VINDO AO BANCO ===\n");
        printf("1 - Exibir saldo da conta\n");
        printf("2 - Depositar dinheiro\n");
        printf("3 - Sacar dinheiro\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                exibirSaldo(c1);
                break;

            case 2:
                depositarDinheiro(&c1);
                break;

            case 3:
                sacarDinheiro(&c1);
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}