#include<stdio.h>
int point(int *arr,int size_1, int target_1)
{
    for (int m = 0; m < size_1; m++)
    {
        if (target_1 == *(arr + m))
        {
            return m;
        }
    }
    return 0;
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
    printf("Enter the number you want to search: ");
    scanf("%d",&target);

    index = point(&array[0], size, target);
    printf("Index is %d",index);
    return 0;
}