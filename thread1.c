#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *thread_function(void *arg);

int main() {
    pthread_t a_thread;
    int i, j;

    // Create the thread
    if (pthread_create(&a_thread, NULL, thread_function, NULL) != 0) {
        perror("Failed to create thread");
        return 1;
    }

    // Wait for the thread to finish
    pthread_join(a_thread, NULL);

    // Main thread work
    printf("Main thread program\n");
    for (j = 20; j < 25; j++) {
        printf("%d\n", j);
        sleep(1);
    }

    return 0;
}

void *thread_function(void *arg) {
    int i;
    printf("Inside thread\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
        sleep(1);
    }
    return NULL;  // It is good practice to return from thread function
}

