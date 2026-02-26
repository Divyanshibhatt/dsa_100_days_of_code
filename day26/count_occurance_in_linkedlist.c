#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert node at end
struct Node* insert(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Function to count occurrences
int countOccurrences(struct Node* head, int key) {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key)
            count++;
        temp = temp->next;
    }

    return count;
}

// Function to display list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, value, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);
        head = insert(head, value);
    }

    printf("\nLinked List:\n");
    display(head);

    printf("Enter element to count: ");
    scanf("%d", &key);

    int result = countOccurrences(head, key);
    printf("Occurrences of %d = %d\n", key, result);

    return 0;
}