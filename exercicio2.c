#include <stdio.h>
#include <math.h>

int main (){
    float chico=1.50, ze=1.10 ;
    int ano = 0;

    while (ze <= chico)
    {
        chico += 0.02;
        ze += 0.03;
        ano++;
    }

    printf("Quantidade de anos:%d\n",ano);

return 0;
}
