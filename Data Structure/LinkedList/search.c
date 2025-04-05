#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int n) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = n;
    temp->next = head;
    head = temp;
}

int search(int key) {
    struct Node *current = head;
    int position = 1;
    
    while (current != NULL) {
        if (current->data == key)
            return position; // Element found, return position (1-based index)
        current = current->next;
        position++;
    }
    
    return -1; // Element not found
}

int main() {
    int n, value, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        insert(value);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    int position = search(key);
    
    if (position != -1)
        printf("Element %d found at position %d\n", key, position);
    else
        printf("Element %d not found in the linked list.\n", key);

    return 0;
}
