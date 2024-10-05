#include <stdio.h>

int main()
{
    int A;
    int *B = &A,**C = &B,***D = &C;

    printf("Insira A: ");
    scanf(" %d",&A);
    printf("A: %d\n", A);

    *B = A * 2;
    printf("B: %d\n", *B);

    **C = *B * 2;
    printf("C: %d\n", **C);

    ***D = **C * 2;
    printf("D: %d", ***D);

}