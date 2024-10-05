#include <stdio.h>

void imprimir(int * num)
{
    printf("%d\n", *num);
    *num = 10;
}
int main()
{
    int idade = 25;

    imprimir(&idade);
    printf("no main: %d\n", idade);
}