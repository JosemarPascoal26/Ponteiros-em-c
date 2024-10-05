#include <stdio.h>

int strcopy(char *destino, char *origem)
{
    int i = 0;
    while (*(origem + i) != '\0')
    {
        *(destino + i) = *(origem + i);
        i++; 
    }
    *(destino+i) = '\0';    
    return i;
}


int main()
{
    char origem[51] = {"ola mundo, bom dia dia!"};
    char destino[51];

    printf("origem: %s\n",origem);
    printf("numero de caracteres copiados: %d\n",strcopy(destino, origem));


    printf("destino: %s", destino);


}