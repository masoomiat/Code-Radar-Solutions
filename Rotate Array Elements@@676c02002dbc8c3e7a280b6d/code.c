#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array by K positions to the right
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where K >= N
    if (k == 0) return; // No need to rotate if k is 0

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first K elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining N-K elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    
    // Read the size of the array
    scanf("\n%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("\n%d", &arr[i]);
    }

    // Read the value of K
    scanf("\n%d", &k);

    // Rotate the array
    rotateArray(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("\n%d", arr[i]);
    }

    return 0;
}