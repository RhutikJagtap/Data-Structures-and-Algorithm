//Program for Insertion of an element in Array
#include <stdio.h>
#define MAX 100 // Maximum number of elements that can Store
int main()
{
    int size = 0, a[MAX];

    setbuf(stdout, NULL);

    printf("Enter the value of n:\n");
    scanf("%d", &size);

    printf("Enter n elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // code for displaying elements in array
    printf("\n****Elements in array Before Insertion****\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", a[i]);
    }

    // code for insertion in array
    int element, index;
    printf("\nEnter element to be inserted:\n");
    scanf("%d", &element);
    printf("Enter the index where element to be inserted:\n");
    scanf("%d", &index);

    if (index < 0 || index >= size - 1)
    {
        printf("Invalid Index");
    }
    else
    {
        // make space at specified location
        for (int i = size - 1; i >= index; i--)
        {
            a[i + 1] = a[i];
        }
        size++;
        a[index] = element;
    }

    printf("\n**** Elements in array after insertion****\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}
