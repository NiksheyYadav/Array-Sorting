#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

void bubbleSort(int arr[], int size, int order) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (order == 'A' && arr[j] > arr[j + 1]) {
                // Swap for ascending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } else if (order == 'D' && arr[j] < arr[j + 1]) {
                // Swap for descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size, i;
    char order;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Consume newline 
    getchar(); 
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter sorting order (A for Ascending, D for Descending): ");
    scanf(" %c", &order);

    //input validation
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size. Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1; 
    }


    bubbleSort(arr, size, order);

    printf("Sorted array in %s order: \n", (order == 'A' || order == 'a') ? "ascending" : "descending");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}