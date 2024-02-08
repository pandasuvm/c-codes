#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Function prototypes
void displayMenu();
void sum(int arr[], int size);
void difference(int arr[], int size);
void product(int arr[], int size);
void maxTerm(int arr[], int size);
void minTerm(int arr[], int size);
void searchElement(int arr[], int size);
void sortArray(int arr[], int size);
void average(int arr[], int size);
void reverseArray(int arr[], int size);
int isSorted(int arr[], int size);
void removeDuplicates(int arr[], int *size);

int main() {
    int arr[MAX_SIZE];
    int size, choice;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sum(arr, size);
                break;
            case 2:
                difference(arr, size);
                break;
            case 3:
                product(arr, size);
                break;
            case 4:
                maxTerm(arr, size);
                break;
            case 5:
                minTerm(arr, size);
                break;
            case 6:
                searchElement(arr, size);
                break;
            case 7:
                sortArray(arr, size);
                break;
            case 8:
                average(arr, size);
                break;
            case 9:
                reverseArray(arr, size);
                break;
            case 10:
                if (isSorted(arr, size))
                    printf("Array is sorted.\n");
                else
                    printf("Array is not sorted.\n");
                break;
            case 11:
                removeDuplicates(arr, &size);
                printf("Duplicates removed.\n");
                break;
            case 12:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 12);

    return 0;
}

void displayMenu() {
    printf("\n--- Array Operations Menu ---\n");
    printf("1. Sum of array elements\n");
    printf("2. Difference of array elements\n");
    printf("3. Product of array elements\n");
    printf("4. Maximum element in array\n");
    printf("5. Minimum element in array\n");
    printf("6. Search an element in array\n");
    printf("7. Sort the array\n");
    printf("8. Average of array elements\n");
    printf("9. Reverse the array\n");
    printf("10. Check if array is sorted\n");
    printf("11. Remove duplicates from the array\n");
    printf("12. Exit\n");
}

void sum(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += arr[i];
    }
    printf("Sum of array elements: %d\n", result);
}

void difference(int arr[], int size) {
    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result -= arr[i];
    }
    printf("Difference of array elements: %d\n", result);
}

void product(int arr[], int size) {
    int result = 1;
    for (int i = 0; i < size; i++) {
        result *= arr[i];
    }
    printf("Product of array elements: %d\n", result);
}

void maxTerm(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element in array: %d\n", max);
}

void minTerm(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum element in array: %d\n", min);
}

void searchElement(int arr[], int size) {
    int target, found = 0;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d.\n", target, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }
}

void sortArray(int arr[], int size) {
    // Using bubble sort for simplicity
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array sorted successfully.\n");
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Average of array elements: %.2f\n", (float)sum / size);
}

void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    printf("Array reversed successfully.\n");
}

int isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void removeDuplicates(int arr[], int *size) {
    for (int i = 0; i < *size; i++) {
        for (int j = i + 1; j < *size;) {
            if (arr[j] == arr[i]) {
                for (int k = j; k < *size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            } else {
                j++;
            }
        }
    }
}
