
#include <stdio.h>
#include <conio.h>

void Traverse(); // function declaration
void Insert();   // function declaration
void Delete();
void Delete_pos();

// global variable declaration
int i, k;
int Arr[10]; // Declare Arr as an array
int n = 4;   // Initial number of elements in the array

void Traverse() { // function definition
	printf("\nThe elements of Arr are:\n");
	for (i = 0; i < n; i++) { // Loop should go from 0 to n-1
		printf("\t%d", Arr[i]);
	}
	printf("\n");
}

void Insert() { // function definition
	printf("\nInsert values into Arr:\n");
	for (i = 0; i < n; i++) { // Loop should go from 0 to n-1
		printf("Arr[%d] = ", i);
		scanf("%d", &Arr[i]);
	}
}

void Delete() { // function definition
	if (n > 0) { // Check if there are elements to delete
		k = n - 1;
		printf("\nAfter deleting an element from the end...\nThe present array is:\n");
		for (i = 0; i < k; i++) // Loop should go from 0 to k-1
			printf("\nElement of Arr[%d] = %d", i, Arr[i]);
		n--; // Decrease the size of the array
	} else {
		printf("\nArray is empty, cannot delete.\n");
	}
}

void Delete_pos() { // function definition
	int pos;
	printf("\nEnter the array position/index to delete (0 to %d): ", n - 1);
	scanf("%d", &pos);

	if (pos < 0 || pos >= n) { // Check for valid position
		printf("\nInvalid position!\n");
		return;
	}

	for (int j = pos; j < n - 1; j++) {
		Arr[j] = Arr[j + 1]; // Shift elements to the left
	}
	n--; // Decrease size after deletion

	printf("\nAfter deleting an element from the array at location [%d]...\nThe present array is:\n", pos);
	Traverse(); // Display updated array after deletion
}

int main() {
	Insert();     // function call
	Traverse();   // function call
	Delete_pos(); // function call to delete at specific position
	Delete();     // function call to delete from the end
	getch();      // Wait for a key press
	return 0;
}

// #include <stdio.h>
// #include <conio.h>
// void Traverse(); // function declaration
// void Insert();   //   function declaration
// void Delete();
// void Delete_pos();
//// global variable declaration
// int i, k;
// int Arr[10];
// int n = 4;
//
// void Traverse() // function definition
//{
//     printf("\n The elements of Arr is\n");
//     for (i = 0; i <= n; i++)
//     {
//         printf("\t%d", Arr[i]);
//     }
//     printf("\n");
// }
//
// void Insert() // function definition
//{
//     printf("\n Insert values at Arr:\n\t");
//     for (i = 0; i <= n; i++)
//     {
//         scanf("%d", &Arr[i]);
//     }
// }
//
// int main()
//{
//     Insert();   // function call
//     Traverse(); // function call
//     Delete_pos();
//     Delete();
//     getch();
//     return (0);
// }
//
// void Delete()
//{
//     k = n - 1;
//     printf("\n After deleting an element from the array end...\n the Present Array is:\n");
//     for (i = 0; i <= k; i++)
//         printf("\n Element of Arr[%d]=%d", i, Arr[i]);
// }
//
// void Delete_pos()
//{
//     int pos;
//     printf("\n Enter the array position/ index to delete:");
//     scanf("%d", &pos);
//     int j;
//     for (j = pos; j < n; j++)
//     {
//         printf("\n After replace the value at index[%d] by value of index[%d]...", j, j + 1);
//         Arr[j] = Arr[j + 1];
//         Traverse();
//         getch();
//     }
//     k = n - 1;
//     printf("\n After deleting an element from the array location[%d]...\n the Present Array is:\n", pos);
//     for (j = 0; j <= k; j++)
//         printf("\t%d", Arr[j]);
// }