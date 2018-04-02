#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma, media;
    soma = media = 0;
    float nota [4];
    for ( int i = 0; i < 4; i++){
        printf(" digite a nota: ");
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

    media = soma/4;
    printf(" a media eh : %.2f\n", media);
    if ( media >= 7.00)
        {
            printf("Aprovado");
        }
    else if ( media < 7 && media >= 4)
        {
        printf( " Vai para a prova final!");

        }
    else
        { printf("Reprovado");

    }
    return 0;
}
