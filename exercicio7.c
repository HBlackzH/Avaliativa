#include <stdio.h>
#include <math.h>

int main (){

    int n,alunos = 2;
    float n1, n2 , n3 , mediap , mediag =0.0;

    for (n = 0; n < alunos; n++){
    printf("Digite as três notas do aluno %d (n1 n2 n3):\n ", n + 1);
        scanf("%f %f %f", &n1 ,&n2, &n3);

        mediap = ( n1*2 + n2*4 + n3*3 ) / 9;

        mediag +=mediap;

        printf("A media do aluno %d é :%.2f ,", n+1, mediap);

        if (mediap>= 7)
        {
            printf("Aprovado\n");
        }else {
            printf("Reprovado\n");
        }
        
    }
    mediag /=alunos;
    printf("Média:%.2f",mediag);

    return 0;
}
