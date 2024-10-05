#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;



void imprimir(Data *x)
{
    printf("%.2d/%.2d/%.4d", x->dia, x->mes, x->ano);
}

int main()
{
    Data data;
    Data *P = &data;
    data.dia = 29;
    data.mes = 2;
    data.ano = 2021;

    printf("data: %p\tp: %p\n",&data,P);
    //printf("%.2d/%.2d/%.4d\n", data.dia, data.mes, data.ano);
    imprimir(&data);
    return 0;
}