#include <stdio.h>
#include <math.h>

int main(){
    int ladoA,ladoB,ladoC;

    printf("Digite 3 numeros consecultivos:");
    scanf("%d %d %d",&ladoA,&ladoB,&ladoC);

if (ladoA + ladoB >ladoC && ladoB + ladoC > ladoA && ladoA + ladoC > ladoB)
    {
    printf("é um triangulo");

    if (ladoA == ladoB && ladoA == ladoB && ladoB == ladoC)
    {printf(" equilatero ");

    }else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC)
    {
        printf(" escaleno ");
    }else 
    {
        printf(" isósceles ");
    }

}else{
printf("não é um triangulo");
}

return 0;    
}
