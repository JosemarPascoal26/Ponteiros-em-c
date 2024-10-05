#include <stdio.h>

int main()
{
    int A = 100;
    int *B = &A;
    int **C = &B;
    int ***D = &C;


    printf("A: %d\tA:%p\n",A,&A);
    printf("B: %p\tB:%p\n",B,&B);
    printf("C: %p\tC:%p\n",C,&C);
    printf("D: %p\tD:%p\n",D,&D);
    


}