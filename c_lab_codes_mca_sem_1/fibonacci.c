#include<stdio.h>
int main()
{
    int a=0,b=1,c;
    int n;
    printf("Enter the value till where you want to print fibonacci series ");
    
    scanf("%d",&n);
    printf("The fibonacci series is = ");
    printf("%d " " %d",a,b);
    for(int i=3;i<=n;i++)
     { 
        c=a+b;        
        printf("%d ",c);
        a=b;
        b=c;
      
     }
    
    
    return 0;

}