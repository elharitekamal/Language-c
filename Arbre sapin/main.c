#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, o, L, u;
    L=10;

for(o=0; o<L; o++){
    for(j=0; j<L-o; j++)
        printf(" ");
    for(i=0; i<=2*o; i++){
        printf("*");
    }
    printf("\n");
    }

for(o=5; o<L; o++){
    for(j=0; j<L-o; j++)
        printf(" ");
    for(i=0; i<=2*o; i++){
        printf("*");
    }
    printf("\n");
    }
for(o=5; o<L; o++){
    for(j=0; j<L-o; j++)
        printf(" ");
    for(i=0; i<=2*o; i++){
        printf("*");
    }
    printf("\n");
    }



    return 0;
}
