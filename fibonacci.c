#include <stdio.h>

void  fibonacci(int n){
    int a=0,b=1, next;
    printf("fibonacci series : ");
    for(int i=0;i<n;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
}


int main()
{
    int k;
   printf("enter a nuumber:  ");
   scanf("%d",&k);
   fibonacci(k);
   return 0;
}
