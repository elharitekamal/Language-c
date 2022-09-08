#include <stdio.h>
#include <stdlib.h>

int main(){
 int x, y, stay;
 char oper;
 do{
    printf("Salut Cher Utilisateur, j'espere que vous allez bien !\n");
    printf("Saisir le Premier nombre :\n");
    scanf("%d", &x);
    printf("Saisir le Deuxieme nombre :\n");
    scanf(" %d", &y);
    printf("Donner l'operation voulue : \n");
    scanf(" %c", &oper);
    switch(oper){
    case'+': printf("x + y = %d\n", x+y);break;
    case'-': printf("x - y = %d\n", x-y);break;
    case'*': printf("x * y = %d\n", x*y);break;
    case'/': printf("x / y = %d\n", x/y);break;
    default: printf("error");break;
    }
    printf("Tapez 0 pour CONTINUER :\n");
    printf("Tapez un nombre different a 1 pour QUITTER : \n");
    scanf("%d", &stay);

   }while(stay == 0);
   printf("A Bientot !!");

    return 0;
}

