#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

struct node* insertatend(struct node* head, int data) {
    struct node* newnode = createnode(data);
    if (head == NULL) {
        return newnode;
    }
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

struct node* insertatbeginning(struct node* head, int data) {
    struct node* newnode = createnode(data);
    newnode->next = head;
    return newnode;
}

void printlist(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    head = insertatend(head, 10);
    head = insertatend(head, 20);
    head = insertatend(head, 30);
    printf("List after inserting at the end:\n");
    printlist(head);
    head = insertatbeginning(head, 5);
    printf("List after inserting at the beginning:\n");
    printlist(head);
    
    // Free the allocated memory
    struct node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

