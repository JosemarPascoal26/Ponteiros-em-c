#include <stdio.h>

int main()
{
    int v[10] = {1,2,3,4,5,6,7,8,9,10};

    int i = 0;

    while (i < 10)
    {
        printf("conteudo da posicao %d: %d\tEndereco: %p\n", i, *(v+i), v+i);
        i++;
    }
    
}