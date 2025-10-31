#include <stdio.h>

void sortarray(int arr[], int n, int order){
    int i,j,temp;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if(order==1 && arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            else if(order==2 && arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[100];
    int n,i , order;
    printf("enter number of elements you want to add : ");
    scanf("%d",&n);
    printf("enter %d elements in array : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter 1 =ascending and 2 = descending : ");
    scanf("%d",&order);
    if(order==1 || order==2){
          sortarray(arr,n,order);
    printf("\n---------sorted array---------\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    }else{
        printf("error: enter a valid inpt 1 or 2");
    }



}











