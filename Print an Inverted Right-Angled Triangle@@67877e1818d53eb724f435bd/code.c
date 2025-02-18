#include <stdio.h>

int main() {
    int N= 5;
    for (int i = 0; i < N; i++) {

        // Inner loop to print the * in each row
        for (int j = 0; j < N - i; j++)
            printf("* ");
        printf("\n");
    }
}