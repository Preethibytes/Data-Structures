#include<stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // return the index where the element is found
        }
    }
    return -1; // return -1 if the element is not found
}

int main() {
    int arr[] = {1, 5, 7, 9, 3}; // correct array initialization
    int size = sizeof(arr) / sizeof(arr[0]); // size of the array
    int target = 9; // element to search for
    
    int result = linearSearch(arr, size, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result); // fixed printf syntax
    } else {
        printf("Element %d not found in the array\n", target); // fixed message for singular "element"
    }

    return 0;
}
