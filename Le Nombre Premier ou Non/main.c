#include <stdio.h>
#include <stdlib.h>

int main()
{
   int p = 0, i, N;

   printf(" Tapez Le nombre: ");
   scanf("%d", &N);

   for(i=1; i<=N; i++)
   {
      if(N%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf(" %d est un nombre premier.",N);
   }
   else
   {
      printf(" %d n'est pas un nombre premier.",N);
   }
}
