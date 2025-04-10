#include <stdio.h>

int main() {
    int arr[100]; // Array with maximum size 100
    int n, size, i, pos, val, num_del;

    // Step 1: Input the initial size and elements
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    size = n; // Current size of the array

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Handle position-based deletions
    printf("Enter the number of position-based deletions: ");
    scanf("%d", &num_del);
    for (i = 0; i < num_del; i++) {
        printf("Enter position to delete: ");
        scanf("%d", &pos);

        // Convert 1-based position to 0-based index
        pos = pos - 1;

        // Check if position is valid
        if (pos < 0 || pos >= size) {
            printf("Invalid position!\n");
            continue;
        }

        // Shift elements to the left to fill the gap
        for (int j = pos; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        size--; // Decrement the size
    }

    // Print array after position-based deletions
    printf("Array after position-based deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 3: Handle value-based deletion
    printf("Enter the value to delete (all occurrences): ");
    scanf("%d", &val);

    // Delete all occurrences of the value
    i = 0;
    while (i < size) {
        if (arr[i] == val) {
            // Shift elements to the left to fill the gap
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--; // Decrement the size
        } else {
            i++;
        }
    }

    // Print array after value-based deletion
    printf("Array after value-based deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}