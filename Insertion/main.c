#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50], i, taille, N, pos;
    printf("Tapez la taille du Tableau :\n");
    scanf("%d", &taille);
    for (i=0; i<taille; i++){
        printf("Tapez T[%d] :\n", i+1);
        scanf("%d", &T[i]);
    }
    printf("Tapez la valeur a inserer : \n");
    scanf("%d", &N);
    printf("Tapez sa position : \n");
    scanf("%d", &pos);
    if(pos<=0 || pos>taille+1)
        printf("La position est invallide \n");
    else
    for(i=taille; i>=pos; i--){
        T[i]=T[i-1];}
        T[pos-1]=N;
        taille++;
    printf("Donc les elements du tableau apres le tri : \n");
    for(i=0; i<taille; i++){
        printf(" T[%d] = %d\n", i+1, T[i]);
    }
    return 0;
}
