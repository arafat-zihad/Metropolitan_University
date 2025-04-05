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

int count_nodes(struct Node *node) {
    int count = 0;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    return count;
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
    
    printf("Total number of elements in the linked list: %d\n", count_nodes(head));

    return 0;
}
