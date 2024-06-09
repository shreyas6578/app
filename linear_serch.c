// 1.1 Write a Program to search an element in a given array using linear search
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],search,i,n,count=0;
	//clrscr();
	printf("\n How many number do you want to enter ? : ");
	scanf("%d",&n);

	printf("\nEnter %d number\n ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the Number to search :");
	scanf("%d",&search);

	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("\n%d is present at location %d \n",search,i+1);
			printf("\nAs per array %d is present at location %d",search,i);
			count++;
		}
	}
	if(count==0)
	{
		printf("\n%d is not present in list.\n",search);
	}

	getch();
	//return 0;

}