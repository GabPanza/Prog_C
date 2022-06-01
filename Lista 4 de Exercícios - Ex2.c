#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, cont=0, vc[5],vr[10],vx[5];

    for (i=0;i<5;i++)
    {
        vx[i] = NULL;
        printf("Digite o elemento %d do Vetor C: ", i);
        scanf("\n%d", &vc[i]);
    }
    for (i=0;i<10;i++)
    {
        printf("Digite o elemento %d do Vetor R: ", i);
        scanf("\n%d", &vr[i]);
    }
    printf("\nVetor X: ");
    for (i=0;i<5;i++)
    {
        for (j=0;j<10;j++)
        {
            if (vc[i]==vr[j])
            {
                vx[i] = vr[j];
            }
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=1;j<5;j++)
        {
            if ((vx[i]==vx[j]) && (i!=j))
                vx[j]=NULL;
        }
        if (vx[i] != NULL)
            printf("%d ", vx[i]);
    }
}
