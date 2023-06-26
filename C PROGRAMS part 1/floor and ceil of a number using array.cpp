#include <stdio.h>
int FindCeil(int arr1[], int n, int x)
{
    int low = 0, high = n - 1, mid;
    int ceil = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr1[mid] == x)
            return arr1[mid];
        else if (x < arr1[mid])
        {
            ceil = arr1[mid];
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ceil;
}

int FindFloor(int arr1[], int n, int x)
{
    int low = 0, high = n - 1, mid;
    int floor = -1;
    while (low <= high)
	{
        mid = (low + high) / 2;
        if (arr1[mid] == x)
            return arr1[mid];
        else if (x < arr1[mid])
            high = mid - 1;
        else
        {
            floor = arr1[mid];
            low = mid + 1;
        }
    }
    return floor;
}
int main()
{
    int arr1[] = { 1, 3, 5, 7, 8, 9 };
    int ctr = sizeof(arr1) / sizeof(arr1[0]);
	int i;	
	printf("The given array is :  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");	
	for (int i = 0; i <= 10; i++)
    {
        printf("Number: %d   ", i);
        printf("ceiling is: %d   ", FindCeil(arr1, ctr, i));
        printf("floor is: %d\n", FindFloor(arr1, ctr, i));
    }
    return 0;
}

