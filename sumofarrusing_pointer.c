/*/sum of array using pointer;

int pointer_arr(int arr[],int n){
    int i=0 , sum=0;
    int *ptr;
    ptr=arr;
    for(i=0;i<n;i++){
        sum+= *(ptr+i);
    }
    return sum;
}

int main(){
    int n,i;
    printf("enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements in the array : ",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int res= pointer_arr(arr,n);
    printf("the sum of your array is %d ",res);
}

*/
