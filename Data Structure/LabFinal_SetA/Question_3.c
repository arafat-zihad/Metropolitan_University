#include <stdio.h>

int main() {
    int arr[100]; // Array with maximum size 100
    int n, size, i, pos, val, num_ins, target;

    // Step 1: Input the initial size and elements
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    size = n; // Current size of the array

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Handle position-based insertions
    printf("Enter the number of position-based insertions: ");
    scanf("%d", &num_ins);
    for (i = 0; i < num_ins; i++) {
        printf("Enter value to insert and position: ");
        scanf("%d %d", &val, &pos);

        // Convert 1-based position to 0-based index
        pos = pos - 1;

        // Check if position is valid and array size doesn't exceed 100
        if (pos < 0 || pos > size) {
            printf("Invalid position!\n");
            continue;
        }
        if (size >= 100) {
            printf("Array is full, cannot insert!\n");
            continue;
        }

        // Shift elements to the right to make space
        for (int j = size; j > pos; j--) {
            arr[j] = arr[j - 1];
        }
        arr[pos] = val; // Insert the value
        size++; // Increment the size
    }

    // Print array after position-based insertions
    printf("Array after position-based insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 3: Handle value-based insertion
    printf("Enter value to insert and target value to insert after: ");
    scanf("%d %d", &val, &target);

    // Insert the value after all occurrences of the target
    i = 0;
    while (i < size) {
        if (arr[i] == target) {
            // Check if array size doesn't exceed 100
            if (size >= 100) {
                printf("Array is full, cannot insert!\n");
                break;
            }
            // Shift elements to the right to make space
            for (int j = size; j > i + 1; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = val; // Insert the value after the target
            size++; // Increment the size
            i += 2; // Skip the newly inserted element
        } else {
            i++;
        }
    }

    // Print array after value-based insertion
    printf("Array after value-based insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}