/*/Implement binary search using recursion.
#include <stdio.h>

int binari_serach(int arr[], int high, int low, int target ){
    if (low>high){
        return 1;
    }
    int mid=(high+low)/2;

    if (arr[mid]==target){
        return mid;
    }
    else if (arr[mid]<target){
        return binari_serach(arr,high, mid+1,target);
    }
    else if(arr[mid]>target){
        return binari_serach(arr, mid-1,low,target);
    }

}
int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    int result = binari_serach(arr, 0, n - 1, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}

*/
