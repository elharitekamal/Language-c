#include <stdio.h>
#include <stdlib.h>
void TriaBulle(int *T, int taille){
    int i, j, help;
    for(i=0; i<taille; i++){
        for(j=i+1; j<taille; i++){
            if(*(T+i)<*(T+j)){
                help=*(T+i);
                *(T+i)=*(T+j+1);
                *(T+j+1)=help;
            }
        }
    }
    printf("le tableau apres le tri : \n");
        for(i=0;i<taille;i++){
                printf("%d \n",*(T+i));

}
}

void Recherche(int trouve,int *T, int taille){
    int debut=0;
    int fin=taille-1;
    int milieu=(debut+fin)/2;
    while(*(T+milieu)!=trouve && fin>debut){
        if(*(T+milieu)>trouve){
            fin=milieu-1;
        }

        else
           {
            debut=milieu+1;
           }
           milieu=(debut+fin)/2;
    }

    if(*(T+milieu)==trouve)
        printf("La valeur est dans la  case %d \n", milieu+1);
    else
        printf("La valeur n'existe pas \n");
}


int main()
{
    int *T, taille,i,trouve;
    T= malloc (taille *sizeof(int));
    printf("Choisis la taille de votre Tableau :\n");
    scanf("%d", &taille);
    for(i=0; i<taille; i++){
        printf("Tapez les elements du T[%d] : \n", i+1);
        scanf("%d",T+i);
    }
    TriaBulle(T,taille);
    printf("Tapez la valeur pour la trouver :\n");
    scanf("&d", &trouve);
    Recherche(trouve, T, taille);

    return 0;
}
