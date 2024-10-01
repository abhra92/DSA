#include <stdio.h>
#include <conio.h>
int data[100], n;
// int data[100], n ,i ,k ,j, temp;
void bubble_sort();
void create_array();
void display_array();
int main()
{
	create_array();
	bubble_sort();
	display_array();
	getch();
	return 0;
}
void create_array()
{
	int i;
	printf("\n Enter the limit of DATA[N] :  ");
	scanf("\n %d", &n);
	printf("\n Enter unsorted element are DATA[%d] : \t", n);
	for (i = 0; i < n; i++)
		scanf("\t %d", &data[i]);
}
void display_array()
{
	int k;
	printf("\n The sorted element are DATA[%d] =", n);
	for (k = 0; k < n; k++)
		printf("  %d", data[k]);
}
void bubble_sort()
{
	int temp, i, j;
	for (i = 0; i < n; i++)
	{
		printf("\n After pass - %d \n", i + 1); // trace of int [i]
		for (j = 0; j < n - i - 1; j++)
		{
			printf("\n Comparing between %d and %d", data[j], data[j + 1]); // trace of i and j
			if (data[j] > data[j + 1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
		display_array(); // trace of element comparing betwwen [j] and [j+1]
		getch();
	}
}
