#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the list
void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to reverse the linked list using recursion
struct Node* reverseList(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct Node* rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

int main() {
    struct Node* head = NULL;
    int size, data;
    
    printf("Input list size: ");
    scanf("%d", &size);
    
    printf("Input elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &data);
        insert(&head, data);
    }
    
    printf("The list:\n");
    printList(head);
    
    head = reverseList(head);
    
    printf("The reversed list:\n");
    printList(head);
    
    return 0;
}
