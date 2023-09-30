#include <stdio.h>
#include <string.h>

int main() {
    int num_cidades;
    printf("Digite o número de cidades: ");
    scanf("%d", &num_cidades);

    char cidade_maior_acidente[100], cidade_menor_acidente[100];
    char estado[3];
    float maior_acidente = -1, menor_acidente = -1;
    float soma_veiculos = 0, soma_acidentes_rs = 0;
    int total_veiculos = 0, total_acidentes_rs = 0;

    for (int i = 0; i < num_cidades; i++) {
        char cidade[100];
        int veiculos, acidentes;

        printf("Digite o código da cidade: ");
        scanf("%s", cidade);

        printf("Digite o estado (sigla): ");
        scanf("%s", estado);

        printf("Digite o número de veículos de passeio (em 1992): ");
        scanf("%d", &veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas (em 1992): ");
        scanf("%d", &acidentes);

        soma_veiculos += veiculos;
        total_veiculos++;

        if (strcmp(estado, "RS") == 0) {
            soma_acidentes_rs += acidentes;
            total_acidentes_rs++;
        }

        if (maior_acidente == -1 || acidentes > maior_acidente) {
            maior_acidente = acidentes;
            strcpy(cidade_maior_acidente, cidade);
        }

        if (menor_acidente == -1 || acidentes < menor_acidente) {
            menor_acidente = acidentes;
            strcpy(cidade_menor_acidente, cidade);
        }
    }

    printf("\nEstatísticas:\n");
    printf("a) Maior índice de acidentes de trânsito: %s (%.2f acidentes)\n", cidade_maior_acidente, maior_acidente);
    printf("   Menor índice de acidentes de trânsito: %s (%.2f acidentes)\n", cidade_menor_acidente, menor_acidente);

    float media_veiculos = soma_veiculos / total_veiculos;
    printf("b) Média de veículos nas cidades brasileiras: %.2f veículos\n", media_veiculos);

    if (total_acidentes_rs > 0) {
        float media_acidentes_rs = soma_acidentes_rs / total_acidentes_rs;
        printf("c) Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2f acidentes\n", media_acidentes_rs);
    } else {
        printf("c) Não há cidades do Rio Grande do Sul na amostra.\n");
    }

    return 0;
}
