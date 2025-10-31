/*/Reverse a string without using strrev().

#include <stdio.h>
#include <string.h>

char c[100], h[100];

int main(){
    int i ,j , len;
    printf("Enter a string : ");
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")]='\0';
     len= strlen(c);
     j=0;
     for(i=len-1;i>=0;i--){
        h[j]=c[i];
        j++;
     }
     h[j]='\0';
      printf("Reversed string: %s\n", h);

    return 0;

}
*/
