#include <stdio.h>

int main() {
    int arr[100];
    int n, size, i, pos, val, num_ins, num_del;

    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    size = n; 

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the number of insertions: ");
    scanf("%d", &num_ins);
    for (i = 0; i < num_ins; i++) {
        printf("Enter position and value to insert: ");
        scanf("%d %d", &pos, &val);

        pos = pos - 1;

        if (pos < 0 || pos > size) {
            printf("Invalid position!\n");
            continue;
        }
        if (size >= 100) {
            printf("Array is full, cannot insert!\n");
            continue;
        }

        for (int j = size; j > pos; j--) {
            arr[j] = arr[j - 1];
        }
        arr[pos] = val; 
        size++; 
    }

    printf("Array after insertions: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("Enter the number of deletions: ");
    scanf("%d", &num_del);
    for (i = 0; i < num_del; i++) {
        int choice;
        printf("Enter 1 to delete by position, 2 to delete by value: ");
        scanf("%d", &choice);

        if (choice == 1) { 
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            pos = pos - 1;


            if (pos < 0 || pos >= size) {
                printf("Invalid position!\n");
                continue;
            }

            for (int j = pos; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--; 
        } else if (choice == 2) { 
            printf("Enter value to delete: ");
            scanf("%d", &val);

            int found = 0;
            for (int j = 0; j < size; j++) {
                if (arr[j] == val) {
                    found = 1;

                    for (int k = j; k < size - 1; k++) {
                        arr[k] = arr[k + 1];
                    }
                    size--;
                    break;
                }
            }
            if (!found) {
                printf("Value %d not found in the array!\n", val);
            }
        } else {
            printf("Invalid choice!\n");
        }
    }

    printf("Array after deletions: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}