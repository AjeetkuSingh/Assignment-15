//Assignment 15 sol 1//
/*
#include <stdio.h>

// C function to find maximum in arr[] of size n
int largest(int arr[], int n)
{
	int i;

	// Initialize maximum element
	int max = arr[0];

	// Traverse array elements from second and
	// compare every element with current max
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
	int arr[] = {10, 324, 45, 90, 9808};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Largest in given array is %d", largest(arr, n));
	return 0;
}
*/

//Sol 2//
/*
#include<stdio.h>
int main()
{
  int a[10], Size, i, Smallest, Position;

  printf("\nPlease Enter the size of an array \n");
  scanf("%d",&Size);

  printf("\nPlease Enter %d elements of an array: \n", Size);
  for(i=0; i<Size; i++)
   {
   	 scanf("%d",&a[i]);
   }

  Smallest = a[0];
  for(i=1; i<Size; i++)
   {
    if(Smallest > a[i])
     {
       Smallest = a[i];
       Position = i;
	 }
   }

  printf("\nSmallest element in an Array = %d", Smallest);
  printf("\nIndex position of the Smallest element = %d", Position);

  return 0;
}
*/

//Sol 3//
/*

#include <stdio.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element
		// with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
int main()
{
	int arr[] = { 0, 23, 14, 12, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Original array: \n");
	printArray(arr, n);

	selectionSort(arr, n);
	printf("\nSorted array in Ascending order: \n");
	printArray(arr, n);

	return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>

void rotate(int arr[], int n)
{
int x = arr[n-1], i;
for (i = n-1; i > 0; i--)
	arr[i] = arr[i-1];
arr[0] = x;
}

int main()
{
	int arr[] = {32, 39, 40, 12, 70}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	printf("Given array is\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	rotate(arr, n);

	printf("\nRotated array is\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
*/

//sol 6//
/*
#include <stdio.h>

void main()
{
   int i,n,a[100];

       printf("\n\nRead n number of values in an array and display it in reverse order:\n");
       printf("------------------------------------------------------------------------\n");

   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);

   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }

   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }

   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n");
}
*/

//Sol 7//
/*
#include <stdio.h>

int main()
{
	int arr[10], i, j, Size, Count = 0;

	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);

	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);

 	return 0;
}
*/

//Sol 8//
/*
#include <stdio.h>
int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {

            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}
*/

//Sol 9//
/*
#include <stdio.h>

int main()
{

    int n1,n2,n3;            //Array Size Declaration
    printf("\nEnter the size of first array ");
    scanf("%d",&n1);
    printf("\nEnter the size of second array ");
    scanf("%d",&n2);

    n3=n1+n2;
    printf("\nEnter the sorted array elements");
    int a[n1],b[n2],c[n3];     //Array Declaration
    for(int i=0;i<n1;i++)      //Array Initialized
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int k=n1;
    printf("\nEnter the sorted array elements");
    for(int i=0;i<n2;i++)      //Array Initialized
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("\nThe merged array..\n");
    for(int i=0;i<n3;i++)
    printf("%d ",c[i]);        //Print the merged array

    printf("\nAfter sorting...\n");
    for(int i=0;i<n3;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n3 ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    for(int i=0 ; i<n3 ; i++)       //Print the sorted Array
    {
        printf(" %d ",c[i]);
    }
    return 0;
}
*/

//Sol 10//
#include <stdio.h>

int main()
{
    //Initialize array
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};

    //Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);

    //Array fr will store frequencies of element
    int fr[length];
    int visited = -1;

    for(int i = 0; i < length; i++){
        int count = 1;
        for(int j = i+1; j < length; j++){
            if(arr[i] == arr[j]){
                count++;
                //To avoid counting same element again
                fr[j] = visited;
            }
        }
        if(fr[i] != visited)
            fr[i] = count;
    }

    //Displays the frequency of each element present in array
    printf("---------------------\n");
    printf(" Element | Frequency\n");
    printf("---------------------\n");
    for(int i = 0; i < length; i++){
        if(fr[i] != visited){
            printf("    %d", arr[i]);
            printf("    |  ");
            printf("  %d\n", fr[i]);
        }
    }
    printf("---------------------\n");
    return 0;
}
