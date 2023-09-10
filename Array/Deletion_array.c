#include <stdio.h>
#include <process.h>

#define MAX 100 // Maximum number of elements that can Store
int main()
{
    int size = 5;
    int a[5] = {10, 20, 30, 40, 50};
    setbuf(stdout, NULL);
    printf("****Elements in array before Deletion****\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    int index;
    printf("\nEnter Index of element to be deleted:\n");
    scanf("%d", &index);

    if (index < 0 || index > size - 1)

    {
        printf("Invalid Position:");
    }
    else
    {
        for (int i = index + 1; i <= size - 1; i++)
        {
            a[i - 1] = a[i];
        }
    }
    size--; // Number of elements reduced by 1
    printf("***Elements in Array after deletion***:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}