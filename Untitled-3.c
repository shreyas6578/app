#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;
    
    printf("enter the first string: ");
    gets(str1);
    printf("enter the second string: ");
    gets(str2);
    printf("choose an operation:\n");
    printf("1. Concatenate\n");
    printf("2. Compare\n");
    printf("3. Length\n");
    printf("4. Copy\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 2:
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;

        case 3:
            printf("Length of the first string: %lu\n", strlen(str1));
            printf("Length of the second string: %lu\n", strlen(str2));
            break;

        case 4:
            strcpy(str1, str2);
            printf("Copied string: %s\n", str1);
            break;
            
        default:
            printf("Invalid choice!\n");
            break;
    }
    
    return 0;
}
