#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* cifra_cesar(char* msg)
{
    int i, numero=strlen(msg);
    char *cifra;
    cifra = (char*) malloc(numero*sizeof(char));

    for(i=0; i<numero; i++)
        {
            if(msg[i] == 'z')
            {
                cifra[i]='c';
                continue;
            }
            if(msg[i] == 'y')
            {
                cifra[i]='b';
                continue;
            }
            if(msg[i] == 'x')
            {
                cifra[i]='a';
                continue;
            }
            if(msg[i]==' ')
            {
                cifra[i]=' ';
                continue;
            }
            else
            {
                cifra[i] = msg[i]+3;
                continue;
            }
        }
    return cifra;
}
void main()
{
    char frase[100];
    int numero=0, i;

    printf("Digite a frase a ser transformada: ");
    gets(frase);
    numero=strlen(frase);

    char *volta = cifra_cesar(frase);
    for(i=0; i<numero;i++)
    {
        printf("%c", volta[i]);
    }
}
