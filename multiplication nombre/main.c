#include <stdio.h>
#include <stdlib.h>
void multip(int A){
    int i;
   for(i=0; i<=10; i++){
    printf(" %d x %d = %d \n", A, i, A*i);
   }

}
int main()
{
    int A;
    printf("Tapez le nombre pour la la miltiplication :\n");
    scanf("%d", &A);
   if(A>0)
    multip(A);
   else
    printf("Tapez un nombre positive s'il vous plait");
   multip(2);
    return 0;
}
