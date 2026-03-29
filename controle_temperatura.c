#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperatura [3][3];
    float media_dia, maior_temperatura;
    int i, j;

     printf("Aluno: Lucas dos Santos Bezerra\n");
     printf("Matricula: 0023304\n");
     printf("Aluno: Everton Gabriel Cunha de Oliveira\n");
     printf("Matricula:0023937\n");
    
    for (i = 0; i < 3; i++) {
        printf("--- Dia %d ---\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Digite a temperatura do dia %d: ", j + 1);
            scanf("%f", &temperatura[i][j]);
    if (i == 0 && j == 0) {
                maior_temperatura = temperatura[i][j];
            }
            
            // Verifica se a temperatura atual é a maior
            if (temperatura[i][j] > maior_temperatura) {
                maior_temperatura = temperatura[i][j];
            }
        }
    }
    printf("\n--- RESULTADOS ---\n");

        //Cálculo e exibição da média por dia
        for (i = 0; i < 3; i++) {
            media_dia = 0; // Reseta a soma para cada novo dia
        for (j = 0; j < 3; j++) {
            media_dia += temperatura[i][j];
        }
        printf("Media do Dia %d: %.2f\n", i + 1, media_dia / 3);
    }

    // 3. Exibição da maior temperatura
    printf("\nMaior temperatura registrada: %.2f\n", maior_temperatura);
   return 0;
}