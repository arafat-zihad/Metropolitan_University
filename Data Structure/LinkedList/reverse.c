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

void reverse() {
    struct Node *prev = NULL, *current = head, *next = NULL;
    
    while (current != NULL) {
        next = current->next; // Store next node
        current->next = prev; // Reverse current node's pointer
        prev = current;       // Move pointers one position ahead
        current = next;
    }
    head = prev; // Update head to the new first node
}

void print() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
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
    
    printf("Original Linked List:\n");
    print();
    
    reverse();  // Reverse the linked list
    
    printf("Reversed Linked List:\n");
    print();
    
    return 0;
}
