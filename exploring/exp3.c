#include <stdio.h>

void bubble(int *arr,int size)
{   
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
}

int main()
{
    int size, target, index = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array");
    for(int i = 0; i < size; i++)
    {
        printf("Element number %d:",(i + 1));
        scanf("%d",&array[i]);
    }
    bubble(array, size);
    printf("The sorted array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ",array[i]);
    }
    
    return 0;
}