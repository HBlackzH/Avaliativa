#include <stdio.h>
#include <math.h>

int main() {
    float x = 11 , y = -1;

    if (x > 0 && y >0)
    {
        printf("Quadrante 1");
        
    }else if (x > 0 && y <0)
    {
        printf("Quadrante 2");

    }else if (x < 0 && y > 0)
    {
        printf("Quadrante 3");
    }else if (x > 0 && y <0)
    {
        printf("Quadrante 4");
    }else{
        printf("Ponto 0");
    }    


    return 0;
}
