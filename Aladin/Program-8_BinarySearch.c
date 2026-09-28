#include <stdio.h>

int BinarySearch(int arr)
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 60;
    int result = BinarySearch(arr, size, key);

        if(result != -1) {
            print("Binary Search: Element found at index %d\n", result);
        } else{
            printf("Binary Search:Element not\n");
        }
        return 0; }
