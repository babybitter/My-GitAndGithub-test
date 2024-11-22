#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main() {
    srand(time(NULL));
    int a[N];

    printf("≈≈–Ú«∞£∫");
    for (int i = 0; i < N; i++) {
        a[i] = 10 + rand() % 90;
        printf("%d ", a[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\n≈≈–Ú∫Û£∫");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

