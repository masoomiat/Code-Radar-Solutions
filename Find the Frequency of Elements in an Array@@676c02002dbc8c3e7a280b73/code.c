#include <stdio.h>

// Function to find and print frequency of elements
void findFrequencies(int arr[], int n) {
    int visited[n]; // To track processed elements
    for (int i = 0; i < n; i++) {
        visited[i] = 0; // Initialize as unvisited
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip already counted elements
        }

        int count = 1; // Count occurrences of arr[i]

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }

        // Print element and its frequency
        printf("%d %d\n", arr[i], count);
    }
}

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%1d", &arr[i]); // Read each digit separately

    }

    // Find and print frequencies
    findFrequencies(arr, n);

    return 0;
}