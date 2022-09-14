#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, max, min;
    int T[4]={12, 30, 14, 90};
    max=T[0];
    min=T[0];
    for(i=0; i<4; i++){
        if(T[i]>max)
            max=T[i];
        if(T[i]<min)
            min=T[i];
    }
    printf("Donc le maximum est %d et le minimum est %d ", max, min);
    return 0;
}
