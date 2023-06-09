// The only way to learn a new programming language is by writing programs in it. --Dennis Ritchie,

#include <stdio.h>  
int hcf(int a,int b)
{
   int r,q;
   r = a % b;
   while(r!=0)
   {
      q = a / b;      
      r = a % b;
      if (r == 0)
        break;  
      a = b;
      b = r; 
   }
   return b;
}
int main()
{
   int a,b,h;
   printf("Enter value of dividend and divisor:");
   scanf("%d %d",&a,&b);
   h = hcf(a,b);
   printf("HCF(%d,%d) = %d\n",a,b,h);
   printf("LCF(%d,%d) = %d\n",a,b,a * b / h);

   return 0;
}
   
  
   
  

