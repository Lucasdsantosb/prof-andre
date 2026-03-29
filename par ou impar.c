#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int i, j;
    int numeros[3][3];
    int pares = 0, impares = 0, somaTotal = 0;
    int contador = 1; //variavel para mostrar a ordem

    printf("Aluno: Lucas dos Santos Bezerra\n");
    printf("Matricula: 0023304\n");
    printf("Aluno: Everton Gabriel Cunha de Oliveira\n");
    printf("Matricula: 0023937\n");

    //entrada de dados
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nDigite o %dº numero: ", contador);
            scanf("%d", &numeros[i][j]);

            somaTotal += numeros[i][j]; // soma total

            // classificar se e par ou impar
            if (numeros[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
            
            contador++; //incrementa a contagem a cada numero lido
        }
    }

    //saida de dados
    printf("\nQuantidade de pares: %d", pares);
    printf("\nQuantidade de impares: %d", impares);
    printf("\nSoma total: %d", somaTotal);

    return 0;
}
