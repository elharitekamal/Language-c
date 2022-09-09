#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n1, n2, stay;
    char P;
do{

       printf("********** BIENVENUE CHEZ LA MAEILLEURE CALCULATRICE DU MONDE ! **********\n");
       printf("Veuillez Taper le premier numero :\n");
       scanf("%d", &n1);
       printf("Veuillez Taper le deuxieme numero :\n");
       scanf(" %d", &n2);
       printf("Taper l'operation voulue : ( + - * / ' puissance : P ' ):\n");
       scanf(" %c", &P);

       switch(P){
       case '+' : printf("%d + %d = %d\n", n1, n2, n1+n2);
       break;
       case '-' : printf("%d - %d = %d\n", n1, n2, n1-n2);
       break;
       case '*' : printf("%d x %d = %d\n", n1, n2, n1*n2);
       break;
       case '/' : printf("%d / %d = %d\n", n1, n2, n1/n2);
       break;
       case 'P' : printf("%d a la puissance %d = %.2f\n", n1, n2, pow(n1, n2));
       break;
       default: printf("error 404\n");break; }
       printf("Taper un nombre different a zero pour continuer\n");
       scanf("%d", &stay);


       }while(stay != 0);

       printf("********** A Bientot Cher Utilisateur ! **********");

        return 0;


        }




