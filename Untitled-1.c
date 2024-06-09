#include<stdio.h>
#include<conio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, i, number;

    clrscr();  // Note: clrscr() is not standard and may not work on all systems.

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("%d %d", n1, n2);

    for (i = 2; i < number; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }

    getch();  // Wait for a key press before closing the console (conio.h function).

    return 0;
}

