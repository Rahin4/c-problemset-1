//Concatenate two strings without using strcat()
/*#include <stdio.h>
#include <string.h>
int main(){
    char c[100], h[100], z[200];
    printf("enter a name : ");
    fgets(c,sizeof(c), stdin);
    printf("now enter your town : ");
    fgets(h,sizeof(h), stdin);

    c[strcspn(c, "\n")]='\0';
    h[strcspn(h,"\n")]='\0';
    int i =0,j=0;
    while(c[i]!='\0'){
        z[i]=c[i];
        i++;
    }
    z[i++]=' ';
    while(h[j]!='\0'){
        z[i]=h[j];
        j++;
        i++;
    }
    z[i]='\0';

    printf("Concatenated string: %s\n", z);

    return 0;
}

*/

