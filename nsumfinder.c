/*/Find the sum of all even numbers between 1 and N.

#include <stdio.h>

int main(){
    int sum=0, i,n;
    printf("to which number you want to sum up : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if (i%2==0){
            sum+=i;
        }
    }
    printf("the even sum of %d is %d ", n,sum);
}


*/
