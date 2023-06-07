// The only way to learn a new programming language is by writing programs in it. --Dennis Ritchie
/* Code that finds maximum and second maximum number in given array inputed by the user,
   Author  -- Aditya Patel
   Date    --jun 7   */

#include <stdio.h>

// Driver Code
int main()
{
   int size;  // variable declaration
   int max = 0,secondMax = 0; // variable initialization
// taking size of array
   printf("Enter the size of array:");
   scanf("%d",&size);
   int arr[size];
//taking numbers in array by the user
   for(int i = 0;i<size;i++)
   {
    printf("Enter value %d:",i+1);
    scanf("%d",&arr[i]);
   }
// finding first max number
   for(int i = 0;i<size;i++)
   {
    if (arr[i] > max)
        max = arr[i];   // finding first maximum number
   }
   printf("\n");
   printf("Max number is %d\n",max);

// finding second max number
   for(int i = 0;i<size;i++)
   {
    if(arr[i]==max) 
      continue;   // skipping first max number because we have already found it.
    else
        if(arr[i] > secondMax )
           secondMax = arr[i];  // finding second max number
   }
   printf("Second Max number is %d\n",secondMax);

   return 0;
}

