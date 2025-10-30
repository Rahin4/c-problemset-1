#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf(" enter an number : ");
    scanf("%d",&i);
    if (i%2==0){
        printf("even: %d", i);

    }
    else{
        printf("%d is odd", i);
    }

}
