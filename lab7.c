#include <stdio.h>

void bubbleSort(int arr[], int n, int swaps[]);
void printArray(int arr[], int n, int swaps[]);

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1)/sizeof(array1[0]);
    int n2 = sizeof(array2)/sizeof(array2[0]);
    int swaps1[n1], swaps2[n2];

    for(int i = 0; i < n1; i++) swaps1[i] = 0;
    for(int i = 0; i < n2; i++) swaps2[i] = 0;

    bubbleSort(array1, n1, swaps1);
    bubbleSort(array2, n2, swaps2);

    printf("array1:\n");
    printArray(array1, n1, swaps1);

    printf("\narray2:\n");
    printArray(array2, n2, swaps2);

    return 0;
}

void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps[j]++;
                swaps[j+1]++;
            }
        }
    }
}

void printArray(int arr[], int n, int swaps[]) {
    int i;
    for (i=0; i < n; i++)
        printf("%d: %d times swapped\n", arr[i], swaps[i]);
}

