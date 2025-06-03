#include <stdio.h>
int main()
{
    int movimentoBispo;
    int movimentoTorre = 0;
    int movimentoRainha = 0;
    int movimentoCavalo = 1;

    // Move a torre cinco casas para a direita
    while (movimentoTorre < 5)
    {
        printf("Torre : Direita\n");
        movimentoTorre++;
    }
    // Move a rainha oito casas para esquerda
    do
    {
        printf("Rainha : Esquerda\n");
        movimentoRainha++;

    } while (movimentoRainha < 8);

    // Move o bispo 5 casas para a diagonal(para cima e à direita)
    for (movimentoBispo = 0; movimentoBispo < 5; movimentoBispo++)
    {
        printf("Bispo : Para cima e à direita\n");
    }

    // Move o cavalo duas casas baixo e uma à esquerda

    while (movimentoCavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo : Para baixo\n");
        }
        printf("Cavalo : Esquerda\n");
    }
    return 0;
}
