#include <stdio.h>
#include <math.h>

int main(){
    int lado1,lado2,lado3;
    int cos1,cos2,cos3;
    int quad1,quad2,quad3;

    printf("Digite 3 numeros consecultivos:");
    scanf("%d %d %d",&lado1,&lado2,&lado3);

if (lado1 + lado2 >lado3 && lado2 + lado3 > lado1 &&lado1 + lado3>lado2)
    {
    printf("é um triangulo");

    quad1 = lado1*lado1 ;
    quad2 = lado2*lado2 ;
    quad3 = lado3*lado3 ;

    cos1 = (quad1 + quad2 -quad3)/2*lado1*lado2;
    cos2 = (quad1 + quad3 -quad2)/2*lado1*lado3;
    cos3 = (quad2 + quad3-quad1)/2*lado2*lado3;

    if (cos1 > 90 || cos2 > 90 || cos3 > 90)
        {
            printf("  obtusângulo ");
        }
    else if (cos1 ==90 || cos2 == 90 || cos3 == 90)
        {
            printf(" retângulo ");
        }
    else
        {
            printf(" acutângulo ");
        }
    

}else{
printf("não é um triangulo");
}

return 0;    
}
