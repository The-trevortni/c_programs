#include <stdio.h>

int main()
{

 int n,temp,search,lo,hi,mid,counter;
 printf("Enter the number of elements you want to enter into an array ");
 scanf("%d",&n);
 int arr[n];
 int x=n%2;
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
 printf("Enter the value that you want to search");
 scanf("%d",&search);

 hi=n;
 lo=0;
        for (int i = 0; i <n; i++)
                {   
                 mid=(hi+lo)/2;
                      
                    if(search==arr[mid])
                         {
                             printf("Element %d is present in entered array",search);
                             counter=0;
                             break;

                         } 
                    else if(search>arr[mid])
                         {
                             lo=mid+1;                                                 
                         }
                     else
                         {
                             hi=mid-1;                                                             
                         }
                     counter ++;
                }
            if(counter>0)
                 {
                     printf(" %d is not present in entered array",search);
                 }
return 0;
}