#include <stdio.h>
#include <math.h>

int main(){
    int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
    int voto,opcao;
do
{

    printf("Sabendo que :\n- 1,2,3,4 = voto para os respectivos candidatos;\n- 5 = voto nulo;\n- 6 = voto em branco;\n");
    printf("\nVote:");
    scanf("%d",&voto);


    
    switch (voto)
    {
    case 1:
    n1++;
    break;

    case 2:
    n2++;
    break;

    case 3:
    n3++;
    break;
    
    case 4:
    n4++;
    break;

    case 5:
    n5++;
    break;

    case 6:
    n6++;
    break;

    default:
    printf("Voto invalido");
    
    }
    

    printf("\nNovo voto ?\n1-sim / 0-Nao\n");
    scanf("%d",&opcao);
    
} while (opcao !=0);
    printf("Total de votos 1:%d\n",n1);
    printf("Total de votos 2:%d\n",n2);
    printf("Total de votos 3:%d\n",n3);
    printf("Total de votos 4:%d\n",n4);
    printf("Total de votos 5:%d\n",n5);
    printf("Total de votos 6:%d\n",n6);


    return 0;
}
