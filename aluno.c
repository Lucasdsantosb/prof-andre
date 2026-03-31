#include <stdio.h>
#include <string.h>

// Modelo (struct)
typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

// Função para exibir os dados do Aluno
void exibirAluno(Aluno f) {
    printf("Dados do Aluno\n");
    printf("Matricula: %d\n", f.matricula);
    printf("Nome: %s\n", f.nome);
    printf("Nota: %.2f\n", f.nota);
}

int main() {
    //Criando e preenchendo o objeto f1 da struct Aluno
    Aluno f1;
    
    f1.matricula = 1;
    strcpy(f1.nome, "Julia");
    f1.nota = 7.2;

    //Chamando a função para imprimir os dados na tela
    exibirAluno(f1);

    //Verificando a situação do aluno
    if (f1.nota >= 6.0) {
        printf("Situacao: Aprovado(a)!\n");
    } else {
        printf("Situacao: Reprovado(a)\n");
    }

    return 0;
}