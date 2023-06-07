// The only way to learn a new programming language is by writing programs in it. --Dennis Ritchie,
  
// code that prints prime factor of a given number
#include <stdio.h>

// Driver Code
int main()
{
   int num;
   printf("Enter a number:");
   scanf("%d",&num);
   for(int i = 2;i<=num;i++)
   {
      while(num % i == 0)
      {
         printf("%d ",i);
         num /=i;
      }  
   }
   printf("1\n");
   return 0;
}

