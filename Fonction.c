#include <stdio.h>
#include <stdlib.h>
void signe(int A, int B){
if (A*B<0)
        printf("ils n ont pas le meme signe/n");
else
        printf("ils ont le meme signe/n");
}
int maximum(int A, int B){
    int max;
    if (A>B)
        max = A;
    else
        max = B;
    }
int minimum(int A, int B){
    int min;
    if (A<B)
        min = A;
    else
        min = B;

}


int main(){
    float A, B, max, min;
    printf("Saisir A et B :");
    scanf("%f%f", &A, &B);
    signe(A,B);
    max = maximum(A,B);
    min = minimum(A,B);
    printf("le maximum est %d/n", maximum(A,B));
    printf("le minimum est %d/n", minimum(A,B));
    return 0;
}
