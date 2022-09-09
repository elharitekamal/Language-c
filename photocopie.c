#include <stdio.h>
#include <stdlib.h>

int main()
{  int N;
   float F;
   printf("Saisir N : ");
   scanf("%d", &N);
   if (N <= 10){
    F = N*0.30;
    printf("la facture est %.2f", F);
   }
   else if (10<N<=20){
    F = 10*0.30+(N-10)*0.25;
   printf("la facture est %.2f", F);
   }
   else {
    F = 10*0.30+(N-10)*0.25+(N-20)*0.20;
    printf("la facture est %.2f", F);
   }
    return 0;
}
