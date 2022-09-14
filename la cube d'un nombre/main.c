#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float cube(int A){
 printf("La cube de %d est %.2f", A, pow(A,3));
 }
int main()
{
    int A;
    printf("Tapez le nombre : \n");
    scanf("%d", &A);
    cube(A);
    return 0;
}
