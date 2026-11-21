#include <stdio.h>
#include <string.h>

int main(void){
    
    char estudante[50];
    char curso[20];
    char copia[50];
    char mensagem[60] = "Ola, ";
    
    printf("===== IDENTIFICACAO ACADEMICA ===== \n");
    printf("\n");
    
    printf("Digite o nome do estudante: ");
    scanf("%49s", estudante);
    
    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%19s", curso);
    
    printf("\n");
    printf("===== RESULTADO ===== \n");
    printf("\n");
    
    strcpy(copia, estudante);
    printf("Estudante: %s\n", copia);
    
    if (strcmp(curso, "CC") == 0){
        printf("Curso: Ciência da Computação\n");
    }
    if (strcmp(curso, "SI") == 0){
        printf("Curso: Sistemas de Informação\n");
    }
    
    printf("Caracteres no nome: %zu\n", strlen(estudante));
    
    printf("\n");
    strcat(mensagem, estudante);
    printf("%s!\n", mensagem);
    
    return 0;
    
}