#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void){
    
    Funcionario funcionario1;
    Funcionario funcionario2;
    
    float diferenca;
    
    printf("===== CADASTRO DE FUNCIONÁRIOS ===== \n");
    printf("\n");
    
    printf("===== FUNCIONÁRIO 1 ===== \n");
    
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario1.nome);
    
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    
    printf("Salário: ");
    scanf("%f", &funcionario1.salario);
    
    printf("\n");
    printf("===== FUNCIONÁRIO 2 ===== \n");
    
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario2.nome);
    
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    
    printf("Salário: ");
    scanf("%f", &funcionario2.salario);
    
    printf("\n");
    printf("===== DADOS CADASTRADOS ===== \n");
    
    printf("\nFuncionário 1:\n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salário: R$ %.2f\n", funcionario1.salario);
    
    printf("\nFuncionário 2:\n");
    printf("Nome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salário: R$ %.2f\n", funcionario2.salario);
    
    printf("\n");
    printf("===== COMPARAÇÃO SALARIAL ===== \n");
    
    if (funcionario1.salario > funcionario2.salario){
        
        diferenca = funcionario1.salario - funcionario2.salario;
        
        printf("Maior salário: %s\n", funcionario1.nome);
        printf("Diferença salarial: R$ %.2f\n", diferenca);
        
    }
    else if (funcionario2.salario > funcionario1.salario){
        
        diferenca = funcionario2.salario - funcionario1.salario;
        
        printf("Maior salário: %s\n", funcionario2.nome);
        printf("Diferença salarial: R$ %.2f\n", diferenca);
        
    }
    else {
        
        printf("Os dois funcionários recebem o mesmo salário.\n");
        
    }
    
    return 0;
    
}