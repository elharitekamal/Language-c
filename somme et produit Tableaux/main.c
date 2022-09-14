#include <stdio.h>
#include <stdlib.h>

int main()
{   float T[10], S=0, P=1, M;
    int i;
for(i=0; i<10; i++){
    printf("Taper le nombre du colone %d :\n", i+1);
    scanf("%f", &T[i]);
    S=S+T[i];
    P=P*T[i];
}

    printf("Donc La somme: %2.f , le Produit: %2.f et La Moyenne: %.2f ", S, P, S/10);
    return 0;
}
