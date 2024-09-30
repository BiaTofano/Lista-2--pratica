#include <stdio.h>
#include <stdlib.h>

int main(){

    int jogador;
    int computador;

    printf("Escolha: \n1 - pedra\n2 - papel\n3 - tesoura\n");
    printf("digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &jogador);

    if(jogador < 1 || jogador > 3){
        printf("Escolha incorreta, tente novamente");
        return 1;
    }

    computador = rand() % 3;

    printf("Voce optou por: %d\n e o computador optou por: %d\n", jogador, computador);

    if(jogador == computador){
        printf("Deu empate!");
    }
    else if ((jogador) + 1 % 3 == computador){
            printf("Infelizmente o computador venceu! Tente na próxima");
    }
    else {
        printf("Parabens, voce venceu!");
    }

    return 0;

}
