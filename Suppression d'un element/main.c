#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[8];
    int i, sup, taille=4;
    for(i=0; i<taille; i++){
        printf("Tapez T[%d] = \n", i+1);
        scanf("%d", &T[i]);
    }
    printf("Tapez la case pour supprimer : \n");
    scanf("%d", &sup);
    for(i=sup-1; i<=taille; i++){
        T[i]=T[i+1];
    }
    printf("Donc apres la suppression : \n");
    for(i=0; i<taille-1; i++){
        printf("T[%d] = %d \n", i+1, T[i]);
    }
    return 0;
}
