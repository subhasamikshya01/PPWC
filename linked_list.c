#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* createnode(int data) {
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct node* insertatend(struct node* head, int data) {
    struct node* newnode=createnode(data);
    if(head==NULL) {
        return newnode;
    }
    struct node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
struct node* insertatbeginning(struct node* head, int data) {
    struct node* newnode=createnode(data);
    newnode->next=head;
    return newnode;
}
void printlist(struct node* head) {
    struct node* temp=head;
    while(temp!=NULL) {
        printf("%d -> ", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
struct node* insertatanyposition(struct node* head, int p, int data) {
    struct node* newnode=createnode(data);
    if(p==1) {
        return insertatbeginning(head, data);
    }
    struct node* temp=head;
    for(int i=2; i<p-1; i++) {
        if(temp==NULL) {
            printf("Position is greater than the list length\n");
            return head;
        }
        temp=temp->next;
    }
    newnode->next=temp->next; 
    temp->next=newnode;
    return head;
}
struct node* delete_any(struct node* head, int p) {
    if (head==NULL) {
        printf("List is empty\n");
        return head;
    }
    if(p==1) {
        head=head->next;
        return head;
    }
    struct node* temp=head;
    for(int i=2;i<p-1;i++) {
        if(temp->next==NULL) {
            printf("Position is greater than the list length\n");
            return head;
        }
        temp=temp->next;
    }
    temp->next = temp->next->next;                            
    return head;                       
}
int main(){
    struct node* head = NULL;
    head = insertatend(head, 10);
    head = insertatend(head, 20);
    head = insertatend(head, 30);
    printf("List after inserting at the end:\n");
    printlist(head);
    head = insertatbeginning(head, 5);
    printf("List after inserting at the beginning:\n");
    printlist(head);
    int p, pd;
    printf("Enter position at which you want to enter: ");
    scanf("%d", &p);
    head = insertatanyposition(head, p, 8);
    printf("List after inserting at position %d:\n", p);
    printlist(head);
    printf("Enter the position you want to delete: ");
    scanf("%d", &pd);
    head = delete_any(head, pd);
    printf("List after deleting at position %d:\n", pd);
    printlist(head);
    return 0;
}

