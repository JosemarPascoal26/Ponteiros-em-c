#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main()
{
    int um = 1;
    int dois = 2;
    printf("um: %d\t dois: %d\n",um, dois);
    
    swap( &um, &dois);
    
    printf("um: %d\t dois: %d\n",um, dois);



}