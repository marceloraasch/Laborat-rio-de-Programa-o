#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {15, 48, 22},
        {4, 42, 11},
        {9, 31, 13}
    };
    
    int maior = matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior numero armazenado na matriz é: %d\n", maior);

    return 0;
}