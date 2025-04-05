#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert_at_position(int data, int position) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    
    if (position == 1) { // Insert at head
        temp->next = head;
        head = temp;
        return;
    }
    
    struct Node *current = head;
    for (int i = 1; current != NULL && i < position - 1; i++) {
        current = current->next;
    }
    
    if (current == NULL) {
        printf("Position out of bounds\n");
        free(temp);
        return;
    }
    
    temp->next = current->next;
    current->next = temp;
}

void print() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n, value, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        insert_at_position(value, i + 1); // Insert sequentially
    }
    
    printf("Linked List before inserting at position:\n");
    print();
    
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position to insert at: ");
    scanf("%d", &pos);
    insert_at_position(value, pos);
    
    printf("Linked List after insertion:\n");
    print();
    
    return 0;
}
