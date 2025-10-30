/*
//palindrome name checker
#include <stdio.h>
#include <string.h>

int main(){
    char name [100];
    int length , i , ispalindrome=1;
    printf("enter a name : ");
    char revname[100];
    fgets(name, sizeof(name), stdin);
    length=strlen(name);
    printf("your name length is %d\n ",length);
    if(name[length-1]=='\n'){
        name[length-1]='\0';
        length--;
    }
    for (i=0; i<length;i++){
         revname[i]=name[length-1-i];
        if(name[i]!=name[length-1-i]){
                ispalindrome=0;
        }

    }
    if (ispalindrome){
        printf("%s is a palindrome name which is also %s ", name, revname);
    } else{
        printf("oops %s is not a palindrome ", name);
    }


}
*/
