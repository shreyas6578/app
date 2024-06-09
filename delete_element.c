 //Write a program to delete an elementfrom Array
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[50], size, pos, i;
    //clrscr();

    printf("\nEnter Size of the Array: ");
    scanf("%d", &size);

    if (size <= 0 || size > 50)
    {
	printf("Invalid array size\n");
	return 1; // Exiting program due to invalid input
    }

    printf("\nEnter elements of the array:\n ");
    for (i = 0; i < size; i++)
    {
	scanf("%d", &a[i]);
    }

    printf("\nEnter the position where you want to delete an element: ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size)
    {
	printf("Invalid Position\n");
    }
    else
    {
	for (i = pos - 1; i < size - 1; i++) {
	    a[i] = a[i + 1];
    }
	size--;

	printf("\nArray after deletion: [");
	for (i = 0; i < size; i++)
	{
	    printf(" %d ", a[i]);
	}
	printf("]\n");
    }
    getch();
    return 0;
}
