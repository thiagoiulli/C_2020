#include <stdio.h>

int main() {
    int n;
    int matriz[9][9];
    scanf("%d", &n);
    while (n > 0){
        for (int i = 0; i < 9; i += 2) {
            for (int j = 0; j <= i; j += 2) { //pegando os valores da piramide
                scanf("%d", &matriz[i][j]);
            }
        }

        for (int i = 1; i < 9 ; i += 2) {
            matriz[8][i] = (matriz[6][i-1] - (matriz[8][i-1] + matriz[8][i+1]))/2; //calculando a linha de baixo da piramide
        }

        for (int i = 7; i > 0; i--) {
            for (int j = 0; j <= i; j++) {
                matriz[i][j] = matriz[i+1][j] + matriz[i+1][j+1]; //calculando as outras linhas
            }
        }
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j <= i; ++j) { //imprimindo a piramide
                if(j == i){
                    printf("%d\n", matriz[i][j]);
                }
                else{
                    printf("%d ", matriz[i][j]);
                }
            }
        }
        n --;
    }
    return 0;
}
