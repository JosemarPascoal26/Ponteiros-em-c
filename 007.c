#include <stdio.h>

void imprimir(int v[],int tam, int *maior, int *menor)
{
    *maior = v[0];
    *menor = v[0];

    int i = 0;

    while (i < tam)
    {
        if( *(v+i) > *maior)
        {
            *maior = *(v+i);
        }

        if (*(v+i) < *menor)
        {
            *menor = *(v+i);
        }
        
        i++;
    }
    
}

int main()
{
    int v[] = {1,2,3,14,5,6,-9,8,9,10};
    int maior, menor;
    imprimir(v, 10, &maior ,&menor);
    printf("maior: %d\t menor: %d", maior, menor);
    return 0;
}