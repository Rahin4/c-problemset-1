//Write a program to find the largest of three numbers.

/*
#include <stdio.h>
#include <limits.h>
int maxfinder(int arr[], int len ){
    int i;
    int first, second, third;
    first=INT_MIN;
    second=INT_MIN;
    third=INT_MIN;
    for(i=0;i<len;i++){
        if(arr[i]>first){
          third=second;
          second=first;
          first=arr[i];
        }
        else if(arr[i]>second && arr[i]<first){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third && arr[i]<second){
            third=arr[i];
        }

    }
     printf("Top 3 maximum numbers are: %d, %d, %d\n", first, second, third);
}



void main(void){
    int l[]={1,2,3,4,5,6,7,8,9};
    int ll=sizeof(l)/sizeof(l[0]);
     maxfinder(l, ll);

} */
