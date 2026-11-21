#include <stdio.h>
#include <string.h>

int calcularPontuacao(float fatores[]){
    int pontos = 0;
    
    if (fatores[0] >= 65) pontos += 3;
    if (fatores[1] >= 160) pontos += 3;
    if (fatores[2] == 1) pontos += 3;
    
    if (fatores[3] == 1) pontos += 2;
    if (fatores[4] == 1) pontos += 2;
    if (fatores[5] >= 160) pontos += 2;
    
    float imc = fatores[6] / (fatores[7] * fatores[7]);
    if (imc >= 30) pontos += 2;
    
    if (fatores[8] == 1) pontos += 1;
    if (fatores[9] == 1) pontos += 1;
    if (fatores[10] == 1) pontos += 1;
    if (fatores[11] == 1) pontos += 1;
    if (fatores[12] == 1) pontos += 1;
    
    return pontos;
}

void imprimirClassificacao(int pontuacao){
    if (pontuacao >= 0 && pontuacao <= 4){
        printf("Menor de 10%%\n");
    } else if (pontuacao >= 5 && pontuacao <= 9){
        printf("Entre 10%% e 20%%\n");
    } else if (pontuacao >= 10 && pontuacao <= 14){
        printf("Entre 20%% e 30%%\n");
    } else if (pontuacao >= 15 && pontuacao <= 18){
        printf("Entre 30%% e 50%%\n");
    } else if (pontuacao >= 19 && pontuacao <= 22){
        printf("Acima de 50%%\n");
    } 
}    


void apresentarResultados(int numPacientes, char nomes[][50], int pontuacoes[]){
    printf("\n===================================\n");
    printf("SISTEMA DE ANALISE DE RISCO\n");
    printf("===================================\n\n");
    
    printf("Quantidade de pacientes: %d\n\n", numPacientes);
    
    for (int i = 0; i < numPacientes; i++){
        printf("Paciente %d: %s\n", i + 1, nomes[i]);
    }
    
    printf("\n===================================\n");
    printf("RELATORIO DE RISCO\n");
    printf("===================================\n\n");
    
    for (int i = 0; i < numPacientes; i++) {
        printf("Paciente: %s\n", nomes[i]);
        printf("Classificacao: ");
        imprimirClassificacao(pontuacoes[i]);
        printf("\n");
    }
}

int main(){
    int numPacientes;
    
    char nomes[5][50];
    int pontuacoes[5];
    float fatores[5][13];
    
    printf("Quantos Pacientes deseja cadastrar (1 a 5)? ");
    scanf("%d", &numPacientes);
    
    if (numPacientes < 1) numPacientes = 1;
    if (numPacientes > 5) numPacientes = 5;
    
    for (int i = 0; i < numPacientes; i++){
        printf("\n---dados do Paciente %d ---\n", i + 1);
        printf("Nome do Paciente: ");
        scanf(" %[^\n]", nomes[i]); 
        
        printf("Idade: ");
        scanf("%f", &fatores[i][0]);
        
        printf("Pressao arterial sistolica (mmHg): ");
        scanf("%f", &fatores[i][1]);
        
        printf("Tabagismo (1- SIM / 0 - NAO): ");
        scanf("%f", &fatores[i][2]);
        
        printf("Diabetes (1- SIM / 0 - NAO): ");
        scanf("%f", &fatores[i][3]);
        
        printf("Historico de Doenca cardiaca (1- SIM / 0 - NAO): ");
        scanf("%f", &fatores[i][4]);
        
        printf("Colesterol LDL(mg/dL): ");
        scanf("%f", &fatores[i][5]);
        
        printf("Peso(Kg): ");
        scanf("%f", &fatores[i][6]);
        
        printf("Altura(m): ");
        scanf("%f", &fatores[i][7]);
        
        printf("Sedentarismo (1- SIM / 0 - NAO): ");
        scanf("%f", &fatores[i][8]);
        
        printf("Alimentacao rica em ultraprocessados (1- SIM / 0 - NAO): ");
        scanf("%f", &fatores[i][9]);
        
        printf("Estresse Cronico elevado (1- SIM / 0 - NAO): ");
        scanf("%f", &fatores[i][10]);
        
        printf("Sono inadequado (1- SIM / 0 - NAO): ");
        scanf("%f", &fatores[i][11]);
        
        printf("Sexo biologico masculino (1- SIM / 0 - NAO): ");
        scanf("%f", &fatores[i][12]);
        
        pontuacoes[i] = calcularPontuacao(fatores[i]);
    }    
    
    apresentarResultados(numPacientes, nomes, pontuacoes);
    
    return 0;
}
