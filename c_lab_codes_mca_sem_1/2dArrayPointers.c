
#include <stdio.h>
int main()
{
int n,m;
printf("Enter no of rows and columns");
scanf("%d%d",&n,&m);
int a[n][m] ;

 printf("Enter the elements of array");
for (int i = 0; i < n; i++)
{

        for (int j = 0; j < m; j++)
        {  
             scanf("%d",&a[i][j]);
        }
}

int *ptr[n][m];	
			
for(int i=0;i<n;i++)
{
     for (int j = 0; j < m; j++)
     {
	  ptr[i][j] = &a[i][j];
     }
   
}
printf("The entered 2d Array is \n");
for (int i = 0; i < n; i++)
{
             for (int j = 0; j < m; j++)
             {
                printf("%d  ",*ptr[i][j]);
             }
             printf("\n");
   
}

    return 0;
}

