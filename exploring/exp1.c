#include <stdio.h>

void f_array(int *arr, int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", *((arr+i*n) + j));
        }
    }
}

int main()
{
    int array[][3] = {{1,2,3}, {3,2,1}, {2,3,1}};
    int row = 3, column = 3;
    f_array(&array[0][0], row, column); 
    return 0;
}