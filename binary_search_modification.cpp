#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 100

// Function Declarations
void binary_search();
void insert();
int detect_order(int array[], int n);

// Global Variables
int n, search, array[SIZE], is_ascending;

int main() {
    insert();       // Insert elements into the array
    binary_search(); // Perform binary search
    getch();
    return 0;
}

// Function to Insert Elements into the Array
void insert() {
    printf("\nEnter number of elements (either in ascending or descending order): ");
    scanf("%d", &n);

    if (n > SIZE) {
        printf("Error: Number of elements exceeds the maximum array size (%d).\n", SIZE);
        exit(1);
    }

    printf("\n Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Detect whether the array is sorted in ascending or descending order
    is_ascending = detect_order(array, n);
}

// Function to Detect the Order of the Array
int detect_order(int array[], int n) {
    return (array[0] < array[1]) ? 1 : 0;  // 1 for ascending, 0 for descending
}

// Function to Perform Binary Search
void binary_search() {
    int first = 0, last = n - 1, middle;

    printf("\nEnter value to find: ");
    scanf("%d", &search);

    while (first <= last) {
        middle = (first + last) / 2;

        printf("\n.......First element=%d...........Location=%d", array[first], first + 1);
        printf("\n.......Last element=%d...........Location=%d", array[last], last + 1);
        printf("\n.......Middle element=%d...........Location=%d", array[middle], middle + 1);
        printf("\n.........Comparing %d and %d", array[middle], search);
        printf("\n____________________________________________\n");
        getch();
        if (is_ascending) {
            // Binary Search for Ascending Order
            if (array[middle] < search)
                first = middle + 1;
            else if (array[middle] == search) {
                printf("\n%d found at location %d.", search, middle + 1);
                return;
            } else
                last = middle - 1;
        } else {
            // Binary Search for Descending Order
            if (array[middle] > search)
                first = middle + 1;
            else if (array[middle] == search) {
                printf("\n%d found at location %d.", search, middle + 1);
                return;
            } else
                last = middle - 1;
        }
    }

    printf("\nNot found! %d is not present in the list.", search);
}
