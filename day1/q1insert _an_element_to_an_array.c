#include <stdio.h>

int main() {
    int n, pos, x;
    
    // Read the size of the array
    scanf("%d", &n);
    
    // Declare array with size n+1 to accommodate the new element
    int arr[n + 1];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read position and element to insert
    scanf("%d", &pos);
    scanf("%d", &x);
    
    // Shift elements to the right from position pos-1 onwards
    // We start from the end to avoid overwriting
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element at position pos-1 (0-based indexing)
    arr[pos - 1] = x;
    
    // Print the updated array
    for (int i = 0; i < n + 1; i++) {
        printf("%d", arr[i]);
        if (i < n) {  // Add space after all elements except the last one
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
