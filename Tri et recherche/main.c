#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[6], i, j, help, trouve;
    for(i=0; i<6; i++){
        printf("Entrer l'element T[%d] :\n", i+1);
        scanf("%d", &T[i]);
    }
    // RECHERCHE D'UNE VALEUR //
    printf("Tapez la valeur pour la trouver \n");
    scanf("%d", &trouve);
    int indice = 0;
    for(i=0; i<6; i++){
        if(T[i]==trouve){
            indice = 1;
            break;
            }
            }
    if(indice == 1)
            printf("La valeur %d est dans la case T[%d]\n", trouve, i+1);
    else
            printf("La valeur n'existe pas\n");
    for (i=0; i<6; i++){
        for(j=i+1; j<6; j++){
            if(T[i]>T[j]){
                help = T[i];
                T[i] = T[j];
                T[j] = help;}
        }
    }
    printf(" Et Donc le tri du tableau par un ordre decroisant  :\n");
    for(i=0; i<6; i++){
    printf("T[%d] = %d\n", i+1, T[i]);
    }
    printf("Et pour le tri par l'ordre croissant est :\n");
    for(i=5; i>=0; i--){
        printf("T[%d] = %d\n", i+1, T[i]);
    }

    return 0;
}
