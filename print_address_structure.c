#include <stdio.h>

struct Person {
    int age;
    float height;
    char initial;
};

int main() {
    struct Person person;

    printf("Address of age: %p\n", &person.age);
    printf("Address of height: %p\n", &person.height);
    printf("Address of initial: %p\n", &person.initial);

    return 0;
}
