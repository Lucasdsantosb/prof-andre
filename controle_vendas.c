#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j;
    char produtos [3][20] =  {"Arroz", "Feijão", "Macarrão"}; //vetor nome
    float precos [3] = {5.50, 7.00, 4.00}; //vetor de preços
    int vendas [3][3]; //matriz (3 produtos x 3 dias)
    float total;
    
    //entrada de dados
    printf("Digite a quantidade vendida de cada produto em 3 dias\n");
    for (i = 0; i < 3; i++){
        printf("\nProduto: %s\n", produtos[i]);
        for(j = 0; j < 3 ;j++){
            printf("\nDia %d: ", j+1);
            scanf("%d", &vendas[i][j]);
        }
    }
    
    //calculo de vendas
    
    printf("\n==== RELATORIO DE VENDAS ====\n");
    for (i=0;i<3;i++){
        total = 0;
        for(j=0;j<3;j++){
            total += vendas [i][j] * precos [i];
        }
        printf("\nProdutos: %s\n", produtos [i]);
        printf("\nPreços: R$%.2f\n", precos[i]);
        printf("\nTotal: R$%.2f\n", total);
    }
    return 0;
}