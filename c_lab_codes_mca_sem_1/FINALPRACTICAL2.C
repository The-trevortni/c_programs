
#include <stdio.h>
int magic(int,int,int);
 

 
int main()
{
	int i, j, n;
    printf("Enter the odd number >= 3 \n");
    scanf("%d",&n);
	
	
	if (n < 3 || (n%2) == 0) 
        {
          printf("Please Enter the value >= 3 and it should be odd number\n");
          return 1;
        }
   printf("\n The value of  Magic Constant is = %d \n\n", (n*n+1)/2*n);
 
	for (i = 0; i < n; i++) 
         {
        		for (j = 0; j < n; j++)
               {
        	    		  printf("\t%d", magic(n, n - j - 1, i)*n + magic(n, j, i) + 1);

               }
        		printf("\n");
        	}
	
 
	return 0;
}

int magic(int n, int x, int y)
{
	return (x + y*2 + 1)%n;
}