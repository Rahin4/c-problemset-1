//Check if a number is palindrome (same forward and backward).

/* #include <stdio.h>

int main(){
    int num, reveresd=0, remainder;
    printf("enter  numbers : ");
    scanf("%d",&num);
    int org=num;
    while(num!=0){
        remainder= num%10;
        reveresd= reveresd*10+remainder;
        num=num/10;
    }
    if (org== reveresd){
        printf("%d is a palindrome",org);

    }else{
        printf("%d is not an palindrome ", org );
    }
}
*/
