/*/Write a function that swaps two numbers using call by reference.
#include <stdio.h>

void swap(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int x=10,y=5;
    printf("before swap x was %d and y was %d\n ", x,y);
    swap(&x,&y);
    printf("after swap x is %d and y is %d \n", x,y);
    return 0;
}
*/
