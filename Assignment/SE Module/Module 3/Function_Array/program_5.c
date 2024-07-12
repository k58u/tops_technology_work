//WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice

#include <stdio.h>

void sortAscending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
               
                    temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
               
                 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    int choice;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter %d elements for the first array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

     printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

   switch (choice) {
        case 1:
            sortAscending(arr1, size);
            sortAscending(arr2, size);
            break;
        case 2:
            sortDescending(arr1, size);
            sortDescending(arr2, size);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Sorted first array: ");
    displayArray(arr1, size);
    printf("Sorted second array: ");
    displayArray(arr2, size);

}
