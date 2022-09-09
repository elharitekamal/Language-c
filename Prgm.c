#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom, prenom, loc, email, num;
    int age;
    printf("****** Bonjour Cher Client ******\n");
     printf("Veuillez Taper Ton age Premierement :\n");
    scanf("%d", &age);
    if(age >=18){
    printf("Maintenent Veuillez Tapez Votre Nom :\n");
    scanf("%c", &nom);
    printf("Tapez Votre Prenom :\n");
    scanf(" %c", &prenom);
    printf("Tapez Votre Email :\n");
    scanf(" %c", &email);
    printf("Tapez Votre Numero :\n");
    scanf(" %c", &prenom);

   }
   else
    printf("Tu es encore petit! Reviens quand tu verras 18 ou plus (*__*) ");

    return 0;
}
