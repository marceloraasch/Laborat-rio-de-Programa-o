#include <stdio.h>
#include <string.h>

int main(void){
    
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[70] = "Produto: ";
    
    printf("===== CADASTRO DE PRODUTOS ===== \n");
    printf("\n");
    
    printf("Digite o nome do produto: ");
    scanf("%49s", produto);
    
    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);
    
    printf("\n");
    printf("===== RESUMO ===== \n");
    printf("\n");
    
    strcpy(copia, produto);
    printf("Produto: %s\n", copia);
    
    printf("Caracteres: %zu\n", strlen(produto));
    
    if (strcmp(categoria, "HARDWARE") == 0){
        printf("Categoria: Hardware\n");
    }
    if (strcmp(categoria, "PERIFERICO") == 0){
        printf("Categoria: Periferico\n");
    }
    
    strcat(descricao, produto);
    printf("\n");
    printf("Descricao: %s\n", descricao);
    
    printf("Cadastro concluido!\n");
    
    return 0;
    
}
