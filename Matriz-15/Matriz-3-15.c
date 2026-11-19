#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {7, 2, 9},
        {4, 1, 8},
        {3, 6, 5}
    };
    int contadorPares = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                contadorPares++;
            }
        }
    }

    printf("A matriz possui %d valores pares.\n", contadorPares);

    return 0;
}