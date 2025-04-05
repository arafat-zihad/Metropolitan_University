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
    temp->next = NULL;
    
    if (head == NULL) {
        head = temp;
    } else {
        struct Node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}

void delete_end() {
    if (head == NULL) return; // Empty list case
    
    if (head->next == NULL) { // Single element case
        free(head);
        head = NULL;
        return;
    }
    
    struct Node *current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

void print() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        insert(value);
    }
    
    printf("Linked List before deletion:\n");
    print();
    
    delete_end();
    
    printf("Linked List after deleting last node:\n");
    print();
    
    return 0;
}
