#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, j, help, T[6];
     for(i=0; i<6; i++){
        printf("T[%d] :\n", i+1);
        scanf("%d", &T[i]);
     }
     for(i=0; i<6; i++){
        for(j=i+1; j<6; j++){
            if(T[i]<T[j]){
                help = T[i];
                T[i] = T[j];
                T[j] = help;
            }
        }
     }
     printf("Don l'ordre croissant du tableau est :\n");
     for(i=0; i<6; i++){
        printf("T[%d] = %d\n", i+1, T[i]);
     }

    return 0;
}
