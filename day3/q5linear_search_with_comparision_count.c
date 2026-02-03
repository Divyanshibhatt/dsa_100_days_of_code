#include <stdio.h>

int main() {
    int n, k, i, comparisons = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key k: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        comparisons++;   // counting comparison
        if (arr[i] == k) {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d\n", comparisons);
            return 0;
        }
    }

    printf("Not Found\n");
    printf("Comparisons = %d\n", comparisons);

    return 0;
}
