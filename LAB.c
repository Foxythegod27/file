/*Luna(Paxton)DeWitt - March 8 2024 - Lab #7*/
#include <stdio.h>

// Function to perform Bubble Sort and count swaps
void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // Increment swap count for arr[j]
                swaps[arr[j]]++;
            }
        }
    }
}

// Function to perform Selection Sort and count swaps
void selectionSort(int arr[], int n, int swaps[]) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap arr[i] and arr[min_idx]
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
        // Increment swap count for arr[i]
        swaps[arr[i]]++;
    }
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    // Initialize swap counts for each value to 0
    int swaps1[100] = {0}; // Assuming values are less than 100
    int swaps2[100] = {0}; // Assuming values are less than 100

    // Perform Bubble Sort on array1 and count swaps
    bubbleSort(array1, n1, swaps1);

    // Print swaps for array1 bubble sort
    printf("array1 bubble sort:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d: %d\n", array1[i], swaps1[array1[i]]);
    }
    int total_swaps1 = 0;
    for (int i = 0; i < 100; i++) {
        total_swaps1 += swaps1[i];
    }
    printf("%d\n", total_swaps1);

    // Perform Selection Sort on array1 and count swaps
    selectionSort(array1, n1, swaps1);

    // Print swaps for array1 selection sort
    printf("array1 selection sort:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d: %d\n", array1[i], swaps1[array1[i]]);
    }
    int total_swaps2 = 0;
    for (int i = 0; i < 100; i++) {
        total_swaps2 += swaps1[i];
    }
    printf("%d\n", total_swaps2);

    // Perform Bubble Sort on array2 and count swaps
    bubbleSort(array2, n2, swaps2);

    // Print swaps for array2 bubble sort
    printf("array2 bubble sort:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d: %d\n", array2[i], swaps2[array2[i]]);
    }
    int total_swaps3 = 0;
    for (int i = 0; i < 100; i++) {
        total_swaps3 += swaps2[i];
    }
    printf("%d\n", total_swaps3);

    // Perform Selection Sort on array2 and count swaps
    selectionSort(array2, n2, swaps2);

    // Print swaps for array2 selection sort
    printf("array2 selection sort:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d: %d\n", array2[i], swaps2[array2[i]]);
    }
    int total_swaps4 = 0;
    for (int i = 0; i < 100; i++) {
        total_swaps4 += swaps2[i];
    }
    printf("%d\n", total_swaps4);

    return 0;
}
