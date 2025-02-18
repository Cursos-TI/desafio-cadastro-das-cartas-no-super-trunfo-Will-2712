//cadastro cartas
#include <stdio.h>

int main() {

    char carta = '1';
    char estado = 'S';
    char codigo [05] = "S01";
    char cidade [20] = "São Paulo";
    int populacao = 1145000000;
    float area = 1521.11;
    float pib = 11.655;
    int ponto = 36

    printf("Carta:%c\n", carta);
    printf("Estado:%c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade:%s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área : %.2f km²\n", area);
    printf("PIB: %.3f trilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n, ponto");

    return 0;
}
