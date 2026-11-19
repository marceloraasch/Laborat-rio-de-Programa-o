#include <stdio.h>

int main(void) {
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        printf("Digite a nota do Aluno %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("  Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n--- Média dos Alunos ---\n");
    
    for (int i = 0; i < 3; i++) {
        float soma = 0;
        for (int j = 0; j < 2; j++) {
            soma += notas[i][j];
        }
        float media = soma / 2;
        printf("Aluno %d - Média: %.2f\n", i + 1, media);
    }

    return 0;
}