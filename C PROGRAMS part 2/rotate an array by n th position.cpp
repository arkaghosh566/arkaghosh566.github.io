#include <stdio.h>
int shiftArr1Pos(int *arr1, int arrSize) 
{
    int i, temp;
      temp = arr1[0];
    for(i = 0; i < arrSize-1; i++) 
	{
        arr1[i] = arr1[i+1];
    }
    arr1[i] = temp;
}
void arr1Rotate(int *arr1, int arrSize, int rotFrom)
{
    int i;
    for(i = 0; i < rotFrom; i++)
	{
        shiftArr1Pos(arr1, arrSize);
    }
    return;
}
int main()
{
    int arr1[] = {0,3,6,9,12,14,18,20,22,25,27}; 
	int ctr = sizeof(arr1)/sizeof(arr1[0]);
    int i;	
	printf("The given array is :  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");		
	printf("From 4th position the values of the array are :  ");
	for(i = 4; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n"); 	    
	printf("Before 4th position the values of the array are :  ");
	for(i = 0; i < 4; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");     
    arr1Rotate(arr1, ctr, 4);
     printf("\nAfter rotating from 4th position the array is: \n");
    for(i = 0; i<ctr; i++)
	{
        printf("%d ", arr1[i]);
    }
    return 0;
}
