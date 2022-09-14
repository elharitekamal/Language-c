#include <stdio.h>
#include <stdlib.h>

int main()
{   int T[10], i, max1, max2;
   for (i=0; i<10; i++){
    printf("Tapez T[%d] :\n", i+1);
    scanf("%d", &T[i]);
   }
   max1=T[0];
   max2=T[0];
   for(i=0; i<10; i++){
    if(T[i]>max1){
        max2=max1;
        max1=T[i];}
    if(T[i]>max2 && T[i]<max1){
        max2 = T[i];
    }
   }
   printf("Donc le max1 = %d et max2 = %d", max1, max2);
    return 0;
}
