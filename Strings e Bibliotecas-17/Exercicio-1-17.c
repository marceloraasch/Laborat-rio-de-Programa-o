#include <stdio.h>
#include <string.h>

int main(void){
    
    char nome[50];
    char acesso[20];
    char copia[50];
    char mensagem[60] = "Bem-vindo(a), ";
    
    printf("===== CADASTRO DE USUÁRIOS ===== \n");
    printf("\n");
    
    printf("Digite seu primeiro nome: ");
    scanf("%49s", nome);
    
    printf("Digite seu perfil de acesso: ");
    scanf("%19s", acesso);
    
    printf("\n");
    printf("===== DADOS CADASTRADOS ===== \n");
    printf("\n");
    
    strcpy(copia, nome);
    printf("Nome: %s\n", copia);
    
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    
    if (strcmp(acesso, "ADMIN") == 0){
        printf("Perfil: Administrador \n");
    }
    if (strcmp(acesso, "COMUM") == 0){
        printf("Perfil: Comum \n");
    }
    
    printf("\n");
    strcat(mensagem, nome);
    printf("%s!\n", mensagem);
    
    return 0;
    
}