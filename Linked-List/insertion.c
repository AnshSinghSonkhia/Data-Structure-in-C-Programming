#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node *head, int newData) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newNode->data = newData;
    newNode->next = head;
    return newNode; // The new node becomes the new head
}

// Function to display the linked list
void displayList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Create an empty linked list
    struct Node *head = NULL;

    // Insert nodes at the beginning of the linked list
    head = insertAtBeginning(head, 100);
    head = insertAtBeginning(head, 75);
    head = insertAtBeginning(head, 50);
    head = insertAtBeginning(head, 25);

    // Display the linked list
    printf("Linked List after insertion:\n");
    displayList(head);

    return 0;
}
