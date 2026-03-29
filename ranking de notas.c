#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i, j;
    char alunos[3][100] = {"Pablo", "Plínio", "Jeferson"};
    float notas[3][3];
    float media;
    float melhorMedia = 0;
    int indiceMelhor = 0;

    printf("Aluno: Lucas dos Santos Bezerra\n");
    printf("Matricula: 0023304\n");
    printf("Aluno: Everton Gabriel Cunha de Oliveira\n");
    printf("Matricula:0023937\n");

	//entrada de dados
    printf("\nDigite a nota de cada aluno para calcular a média:\n");

    for(i = 0; i < 3; i++){
        float soma = 0; // zera para cada aluno

        printf("\nAluno: %s\n", alunos[i]);

        for(j = 0; j < 3; j++){
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j]; //acumlo de soma
        }

        media = soma / 3; //calculo de media
	
        printf("%s: Media %.2f\n", alunos[i], media); //saida de dados
        
         // logica do ranking
        if(media > melhorMedia){
            melhorMedia = media;
            indiceMelhor = i;
        }
    }
	
	 // melhor aluno
    printf("\nMelhor aluno: %s (Media: %.2f)\n", alunos[indiceMelhor], melhorMedia);
    
    return 0;
}
