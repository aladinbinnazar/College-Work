#include<stdio.h>
void selectionsort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};```    `1
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    display(arr, n);

    selectionsort(arr, n);

    printf("Sorted array: \n");
    display(arr, n);

    return 0;
 }
