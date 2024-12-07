#include <stdio.h>
#include <stdlib.h>

int *stack, top = -1, s;

int isfull() {
    if (top == s - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isempty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

void resize() {
    s = s + 1;
    stack = (int*)realloc(stack, sizeof(int) * s);
    }

void push(int data) {
    if (isfull()) {
        printf("Stack overflow! Stack is resized and the element is added to the stack.\n");
        resize();
    }
    top = top + 1;
    stack[top] = data;
}

void createstack(int size) {
    stack = (int*)malloc(size * sizeof(int));
}

int pop() {
    int value;
    if (isempty()) {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack[top];
    top = top - 1;
    return value;
}

void display() {
    if (top == -1) {
        printf("Empty stack\n");
    } else {
        printf("Stack contents:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    printf("Enter initial size of the stack: ");
    scanf("%d", &s);  
    createstack(s);

    int choice, data;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to be pushed: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                printf("Deleted element: %d\n", data);
                break;
            case 3:
                display();
                break;
            case 4:
                free(stack);  
                exit(1);
            default:
                printf("Invalid choice! Input again.\n");
        }
    }
}

