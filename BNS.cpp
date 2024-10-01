#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 100

void binary_search();
void insert();
void bubble_sort();
int c, first, last, middle, n, search, array[size];

int main()
{
    insert();           
    binary_search();    
    getch();
    return 0;
}

void binary_search()
{
    printf("\nEnter value to find: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        printf("\nFirst element = %d, Location = %d", array[first], first + 1);
        printf("\nLast element = %d, Location = %d", array[last], last + 1);
        printf("\nMiddle element = %d, Location = %d", array[middle], middle + 1);
        printf("\nComparing %d and %d", array[middle], search);
        printf("\n____________________________________________\n");
        getch();

        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("\n%d found at location %d.", search, middle + 1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }

    if (first > last)
        printf("\nNot found! %d is not present in the list.", search);
}

void insert()
{
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d integers: ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    int is_descending = 1;
    if (is_descending)
    {
        printf("\nArray is in descending order. So let Me Sorting this...\n");
        bubble_sort();
    }
}

void bubble_sort()
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("\nArray sorted in ascending order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}
