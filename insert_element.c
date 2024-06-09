// Program for Insert an element in an Array
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50], size, num, pos, i;
  //  clrscr();

    printf("\n Enter Size of the Array: ");
    scanf("%d", &size);

    printf("\n Enter elements of the array: ");
    for(i = 0; i < size; i++)
    {
	scanf("%d", &a[i]);
    }

    printf("\n Enter the position where you want to insert an element: ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > size + 1)
    {
	printf("Invalid Position");
    }
    else
    {
	printf("\n Enter data you want to insert in the Array: ");
	scanf("%d", &num);

	for(i = size - 1; i >= pos - 1; i--)
	{
	    a[i + 1] = a[i];
	}

	a[pos - 1] = num;
	size++;

	printf("\n Array after insertion:");
	for(i = 0; i < size; i++)
	{
	    printf(" %d", a[i]);
	}
    }
    getch();
    return 0;
}
