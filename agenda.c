#include <stdio.h> 

int main() {
    char *dias[] = {"Segunda", "Terca", "Quarta"};
    
    int agenda[3][2]; // 3 dias, 2 períodos (Manhã e Tarde)
    int total_dia[3];
    int maior = -1;
    int mais_ocupado = 0;

    // 1. Entrada de dados
    for (int i = 0; i < 3; i++) {
        printf("%s -> ", dias[i]);
        scanf("%d %d", &agenda[i][0], &agenda[i][1]);
    // Cálculo do total do dia atual
        total_dia[i] = agenda[i][0] + agenda[i][1];
    // Lógica para encontrar o dia mais ocupado
        if (total_dia[i] > maior) {
            maior = total_dia[i];
            mais_ocupado = i;
        }
    }

    // 2. Saída
    printf("\nSaida esperada:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s: %d compromissos\n", dias[i], total_dia[i]);
    }

    // 3. Resultado final
    printf("\nDia mais ocupado: %s\n", dias[mais_ocupado]);

    return 0;
}