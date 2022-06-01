#include <stdio.h>
#define MAX 10
void main()
{
    int i, vx[MAX], vy[MAX];

    printf("Vetor X: ");
    for (i=0;i<MAX;i++)
    {
        vx[i] = i;
        printf("%d ", vx[i]);
    }
    printf("\nVetor Y: ");
    for (i=0;i<MAX;i++)
    {
        vy[i]=vx[(MAX-1)-i];
        printf("%d ", vy[i]);
    }
}
