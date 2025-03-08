#include <stdio.h>
#include <string.h>

void bubbleSort(char *arr[], int n) {
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char *arr[n];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(100 * sizeof(char));
        scanf("%s", arr[i]);
    }

    printf("\nOriginal strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");


    bubbleSort(arr, n);

    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }

    return 0;
}
