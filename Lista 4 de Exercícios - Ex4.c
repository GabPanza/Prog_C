#include <stdio.h>
#include <stdlib.h>

int testa_PA(int n, int *vetor)
{
    int i, razao;
    razao = (vetor[1] - vetor[0]);
    for (i=1;i<(n-1);i++)
    {
        if ((vetor[i] - vetor[i-1]) == razao)
        {
            continue;
        }
        else
        {
            razao = 0;
            break;
        }
    }
    return razao;
}

void main()
{
    int *v;
    int n, i, progArit;
    printf("Diga o tamanho do vetor: ");
    scanf("%d", &n);
    v = (int*) malloc(n*sizeof(int));
    if (v == NULL)
    {
        printf("ERROR!");
        exit(1);
    }

    for (i=0;i<n;i++)
    {
        printf("Digite o termo %d do vetor: ", i);
        scanf("%d", &v[i]);
    }

    progArit = testa_PA(n,*v);
    if (progArit > 0)
        printf("A razao da PA eh: %d", progArit);
    else
        printf("Nao eh PA")
}
