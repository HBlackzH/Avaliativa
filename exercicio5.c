#include <stdio.h>
#include <math.h>

int main() {
    float x1 = 11 , y1 = 20, x2 = 30, y2 = 20;
    float distancia;

    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2) );

    printf("A distância é: %.2f \n", distancia);


    return 0;
}
