#include <stdio.h>
int findNxtLrgElem (int *arr1, int arr1_size) 
{
    int nxtBgElem, i, j;
    for(i = 0; i < arr1_size; i++) 
	{
        for (j = i+1, nxtBgElem = -1; j < arr1_size; j++) 
		{
            if (arr1[i] < arr1[j]) 
			{
                nxtBgElem = arr1[j];
                break;
            }
        }
        printf("Next bigger element of %d in the array is:   %d\n", arr1[i], nxtBgElem);
    }
}
void formBigElemArray (int *arr1, int arr1_size) 
{
    int nxtBgElem, i, j;
    for(i = 0; i < arr1_size; i++) 
	{
        for (j = i+1, nxtBgElem = -1; j < arr1_size; j++) 
		{
            if (arr1[i] < arr1[j]) 
			{
                nxtBgElem = arr1[j];
                break;
            }
        }
        printf("%d ", nxtBgElem);
    }
}
int main() 
{
    int i, arr1[]= {5, 3, 10, 9, 6, 13};
    int ctr = sizeof(arr1) / sizeof(arr1[0]);	
	printf("The given array is :  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");	
    printf("\nNext Bigger Elements are:\n");
    findNxtLrgElem(arr1, ctr);
	
    printf("\nNext Bigger Elements Array:\n");
    formBigElemArray(arr1, ctr);	
    return 0;
}

