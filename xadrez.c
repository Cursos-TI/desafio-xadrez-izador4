#include <stdio.h>
int main()
{
    int bispo;
    int torre = 0;
    int rainha = 0;

    // Move a torre cinco casas para a direita
    while (torre < 5)
    {
        printf("Torre : Direita\n");
        torre++;
    }
    // Move a rainha oito casas para esquerda
    do
    {
        printf("Rainha : esquerda\n");
        rainha++;

    } while (rainha < 8);

    // Move o bispo 5 casas para a diagonal(para cima e à direita)
    for (bispo = 0; bispo < 5; bispo++)
    {
        printf("Bispo : Para cima e à direita\n");
    }

    return 0;
}
