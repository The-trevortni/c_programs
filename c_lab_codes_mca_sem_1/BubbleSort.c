#include <stdio.h>

int main()
{

 int n,temp,max,count;
 printf("Enter the number of elements you want to enter into an array ");
 scanf("%d",&n);
 int arr[n];
 for (int i = 0; i < n; i++)
 {
     scanf("%d",&arr[i]);

 }
 for (int i = 0; i < n-1; i++)
    {
       for (int j= 0; j < n-1-i; j++)
       {
          if(arr[j]>arr[j+1])
          {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;

          }
       }
    
    }
 printf("The sorted array is ");
 for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }


return 0;
}
