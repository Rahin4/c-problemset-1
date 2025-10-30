//NAME: ATAHARUL ISLAM RAHIN; REG;2022231043
// Problem Set: Structured Programming in C
// Course Code : SWE0613 (ECONOMICS 2/2)
//=======================================================
/*madam,  sorry for late submission  ; i was sick and went through some crisis that's why
i wasnot able to do this homework; i hope  for your consideration.
================================================
-------------------------about this homwork -----------------------------------
==> i bundled all answer into a single file that is why i commented out answers ;
to escape any kind of clash and for testing any answers please do uncomment the
specfic answer;
=====================Thank you ============================*/


/*Q1. If-Else (Easy)
Write a C program that takes an integer input from the user and
 checks whether it is even or odd. Print "Even number" or "Odd number" accordingly.
--------------------------------------------------------------------------*/
#include <stdio.h>
/*

int checknum(k){
    if (k%2==0){
        printf("%d is even\n",k);
    }else{
        printf("%d is odd\n",k);
    }
}

int main()
{
    int k;
   printf("enter a number : ");
   scanf("%d",&k);
   int res= checknum(k);
   return 0;
}  */

/*Write a C program that asks the user to enter a number from 1 to 7
and prints the corresponding day of the week using a switch statement.
Example: Input 1 → Output Sunday.
--------------------------------------------------------------------------*/
/*
int main(){
      int k;
      printf("enter a number between 1 to 7 : ");
      scanf("%d",&k);
      if (k>0 && k<=7){
        switch(k){
        case 1:
            printf("saturday\n");
            break;
        case 2:
            printf("sunday\n");
            break;
        case 3:
            printf("monday\n");
            break;
        case 4:
            printf("tuesday\n");
            break;
        case 5:
            printf("wednesday\n");
            break;
        case 6:
            printf("thrusday\n");
            break;
        case 7:
            printf("friday\n");
        break;
        }
      }else{
      printf(" invalid\nnote:please enter a number between 1 to 7\n");
      }
      return 0;
}
*/

/*Q3. Loops (Medium)
Write a C program to display the multiplication table of any number entered by the user, up to 10 terms.
Example: If input is 5, output should show 5 x 1 = 5 … 5 x 10 = 50.
.
--------------------------------------------------------------------------

int main(){
    int k;
    printf("enter a number for the multiplication table: ");
    scanf("%d",&k);
    for (int i =1; i<=10; i++){
            int j=k*i;
        printf("%d * %d= %d\n", k, i , j);
    }
    return 0;
}

*/

/*Q4. Function (Medium)
Write a C program that defines a function int factorial(int n) which returns the factorial of n.
Example: Input 5 → Output 120.

int facto(k){
    if (k<0){
        printf("Error: %d must be greater than or equal to 0\n", k);
        return -1;
    }  if (k == 0) {
        return 1; }
    else{
        return k* facto(k-1);
    }
}

int main(){
      int k;
    printf("enter a number to find its factorial: ");
    scanf("%d",&k);
    int res= facto(k);
    if (res != -1) {
        printf("Factorial of %d is %d\n", k, res);
    }
    return 0;
}

*/

/*Q5. String (Medium)
Write a C program to take a string input from the user and count the number of vowels (a, e, i, o, u) in it.
Example: Input "Programming" → Output 3 vowels.


#include <ctype.h>
int countwords(char str[]){
    int vowels=0, conso=0;
    for( int i=0; str[i] !='\0';i++){
        char ch= tolower(str[i]);
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            vowels++;
        }
        else if (isalpha(ch)){
            conso++;
            }

        }
        printf("vowels are %d ", vowels);
        printf("consonants are %d", conso);
        return 0;
    }



int main(){
    char str[100];
    printf("enter a string : ");
    fgets(str, sizeof(str), stdin);
    countwords(str);
    return 0;
}





 */


/*6. Combined (Medium Challenge)
Write a C program that:

Takes an integer input.

If the number is negative, print "Negative Number".

If the number is positive, check whether it is prime or not (using a loop and a function isPrime(int n) that returns 1 if prime, 0 otherwise`).


int isPrime(int k){
    int prime=1;
    if (k<0){
        printf("it is a negative number\nplease enter a positive number");
    } else if (k<=1){
         prime=0;
    } else{
        for(int i=2; i*i<=k;i++){
            if(k%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime){
        printf("%d is prime number",k);
    }
    else{
        printf("%d isnot prime number",k);
    }
    return 0;

}


int main(){
    int j;
    printf("enter a number to check for prime: ");
    scanf("%d",&j);
    int res= isPrime(j);
    return 0;
}










*/














