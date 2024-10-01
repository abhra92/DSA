#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 100

 void binary_search();
 void insert();
 
 int c,first,last, middle,n,search,array[100];
 int main()
 {
 	insert();
 	binary_search();
 	getch();
 	return 0;
 }
 void binary_search()
 {
 	printf("\n enter value to find:");
 	scanf("%d",&search);
 	first=0;last=n-1;
 	middle=(first)/2;
 	while(first<=last)
 	{
 		printf("\n......first element=%d........location=%d",array[first],first+1);
 		printf("\n......last element=%d........location=%d",array[last],last+1);
 		printf("\n......middle element=%d........location=%d",array[middle],middle+1);
 		printf("\n......compare %d and %d",array[middle],search);
		printf("\n________________________________________________\n");
		getch();
		
		if(array[middle]<search)
		first=middle+1;
		else if(array[middle]==search)
		{
			printf("\n %d found at location %d",search,middle+1);
			break;
				  }
				  else
				  last=middle-1;
				  middle=(first+last)/2;  		
	 }
	 if(first>last)
	 printf("\n not found! %d is not present in the list",search);
 }
 void insert()
 {
 	printf("\n enter the number of element:");
 	scanf("%d",&n);
 	printf("\n enter %d integers:",n);
 	for(c=0;c<n;c++)
 	scanf("%d",&array[c]);
 }
