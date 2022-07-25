#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int n_processes = 10;

    if (argc != 2) {
        printf("Usage: %s <n_processes>\n", argv[0]);
        printf("Using default value of n_processes = %d\n", n_processes);
    } else {
        n_processes = atoi(argv[1]);
        printf("Using %d processes\n", n_processes);
    }

    // Create n_processes processes
    for (int i = 0; i < n_processes; i++) {
        vfork();
    }
    pause();
    return 0;
}

