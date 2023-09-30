#include <stdio.h>
#include <math.h>

int main() {
    float salario, filhos, maiorsal = 0, sSalario = 0, sFilhos = 0, mediasalario, mediafilhos, percentate100;
    int ate100 = 0, totalusuarios = 0;
    int continuar;

    do {
        printf("Digite o valor do salario (ou um valor negativo para sair): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        printf("Insira a quantidade de filhos: ");
        scanf("%f", &filhos);

        sSalario += salario;
        sFilhos += filhos;
        totalusuarios++;

        if (salario > maiorsal) {
            maiorsal = salario;
        }

        if (salario <= 100) {
            ate100++;
        }

        printf("Deseja inserir outra pessoa? (1 para sim, 0 para não): ");
        scanf("%d", &continuar);

    } while (continuar != 0);

    if (totalusuarios > 0) {
        mediasalario = sSalario / totalusuarios;
        mediafilhos = sFilhos / totalusuarios;
        percentate100 = (ate100 * 100.0) / totalusuarios;

        printf("Média do salário: %.2f\n", mediasalario);
        printf("Média de filhos: %.2f\n", mediafilhos);
        printf("Maior salário: %.2f\n", maiorsal);
        printf("Percentual de pessoas com salário até 100: %.2f%%\n", percentate100);
    } else {
        printf("Nenhuma informação válida inserida.\n");
    }

    return 0;
}
