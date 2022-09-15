#include <stdio.h>
#include <stdlib.h>
void echange(int *a, int *b){
    int help;
    help = *a;
    *a = *b;
    *b = help;
}
int main()
{
    int a=5, b=10;
    echange(&a, &b);
    printf("Donc a = %d et b = %d", a, b);

    return 0;
}
