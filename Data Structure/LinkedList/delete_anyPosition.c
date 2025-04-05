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

void delete_position(int position) {
    if (head == NULL || position <= 0) return; // Empty list or invalid position
    
    struct Node *temp = head;
    
    if (position == 1) { // Delete head node
        head = head->next;
        free(temp);
        return;
    }
    
    struct Node *prev = NULL;
    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) return; // Position out of bounds
    
    prev->next = temp->next;
    free(temp);
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
    int n, value, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        insert(value);
    }
    
    printf("Linked List before deletion:\n");
    print();
    
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    delete_position(pos);
    
    printf("Linked List after deletion:\n");
    print();
    
    return 0;
}
