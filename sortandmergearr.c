#include <stdio.h>

// Function to sort an array using Bubble Sort
void arrsorter(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to merge two sorted arrays
void mergearr(int arr1[], int len1, int arr2[], int len2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < len1) {
        merged[k++] = arr1[i++];
    }

    while (j < len2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 2, 10, 4, 7, 8};
    int arr2[] = {78, 99, 19, 101, 123};
    int len1 = 6, len2 = 5;
    int total = len1 + len2;
    int merged[total];

    // Sort both arrays before merging
    arrsorter(arr1, len1);
    arrsorter(arr2, len2);

    // Merge the two sorted arrays
    mergearr(arr1, len1, arr2, len2, merged);

    // Print the merged sorted array
    printf("Merged Sorted Array: ");
    for (int i = 0; i < total; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

