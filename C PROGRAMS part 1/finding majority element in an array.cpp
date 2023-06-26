# include <stdio.h>
int findMajorityElement(int *arr1, int arr_size) 
{
 int i, mIndex = 0, ctr = 1;
    for(i = 1; i < arr_size; i++) 
	{
        if(arr1[mIndex] == arr1[i])
            ctr++;
        else
            ctr--;
        if(ctr == 0) 
		{
            mIndex = i;
            ctr = 1;
        }
    }
    ctr = 0;
    for (i = 0; i < arr_size; i++) 
	{
        if(arr1[i] == arr1[mIndex])
            ctr++; 
 }
    if(ctr > (arr_size/2))
        printf("The majority of the Element : %d\n", arr1[mIndex]);
    else
        printf("No majority element found in the array.\n");
}
int main()
{
    int i, sum;
     int arr1[] ={1, 3, 3, 7, 4, 3, 2, 3, 3};
     int ctr = sizeof(arr1)/sizeof(arr1[0]);		
	printf("The given array is :  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
	printf("\n"); 
    findMajorityElement(arr1, ctr);
    return 0;
}

