#include <stdio.h>
#include <unistd.h>

void imprimir(int v[],int tam)
{
    int i = 0;
    char buffer[12];

    while (i < tam)
    {
        int length = sprintf(buffer,"%d ", v[i]);

        write(1, buffer, length);
        i++;   
    }
    
}

int main()
{
    int vector[10] = {1,2,3,4,5,6,7,8,9,10};

    imprimir(vector, 10);      
}