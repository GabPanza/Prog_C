#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    float info; /* Valor real armazenado */
    struct elemento *prox; /* Ponteiro para o próximo elemento */
};
typedef struct elemento Elemento;

void preenche(Elemento *lst, int indice)
{
    Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
    printf("Digite o elemento %d do vetor: ",indice+1);
    scanf(" %f", &novo->info);
    lst->info = novo->info;
    lst->prox = novo->prox;
}

Elemento* filtra (Elemento* lst, float min, float max)
{
    Elemento* ant = lst;
    if (ant == NULL)
    {
        return ant;
    }
    Elemento* atual = ant->prox;
    if (atual == NULL)
    {
        if (ant->info < min || ant->info > max)
        {
            ant = NULL;
            return ant;
        }
        else
        {
            return ant;
        }
    }
    while (atual!=NULL)
    {
        if (atual->info < min || atual->info > max)
        {
            Elemento *temp = atual;
            atual = atual->prox;
            free(temp);
        }
        else
        {
            atual = atual->prox;
            continue;
        }
    }

    return ant;
}

void main()
{
    int tam,Novotam=1;
    int i;
    float min, max;
    printf("Digite o tamanho da lista: ");
    scanf(" %d", &tam);
    printf("Digite um valor minimo qualquer: ");
    scanf(" %f", &min);
    printf("Digite um valor maximo qualquer: ");
    scanf(" %f", &max);

    Elemento *lista = (Elemento*) malloc(tam*sizeof(Elemento));
    if (lista==NULL)
    {
        printf("Error!");
        exit(1);
    }

    for (i=0;i<tam;i++)
    {
        preenche(&lista[i], i);
    }

    Elemento *lstResp = filtra(lista,min,max);
    while (lstResp->prox != NULL)
    {
        Novotam++;
    }
    for (i=0;i<Novotam;i++)
    {
        printf("\nInfo %d do vetor de structs: ", i+1);
        printf(" %f", lstResp[i].info);
    }

    free(lista);
    free(lstResp);
}
