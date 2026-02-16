#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    printf("=== JOGO DA ADIVINHACAO ===\n");

    do {
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numeroSecreto) {
            printf("Menor!\n");
        } else if (palpite < numeroSecreto) {
            printf("Maior!\n");
        } else {
            printf("Parabens! Voce acertou em %d tentativas!\n", tentativas);
        }

    } while (palpite != numeroSecreto);

    return 0;
}
