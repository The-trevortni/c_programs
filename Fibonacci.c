#include<stdio.h>
int fibonacci(int,int,int);
int main()
{
    int n,res,i=0,j=1;
    printf("Enter the number of elments you want to print for FIBONACCI series");
    scanf("%d",&n);
    printf("0 , 1");
    fibonacci(i,j,n);
    

    return 0;
}

int fibonacci(int i,int j,int n)
    {
        int c;
            
         if(n>=2)
         {
              
              c=i+j;
              i=j;
              j=c;
              printf(",%3d",c);
              //fibonacci(i,j,n-1);
              return 0;
         }
         else
         {
          return 1;
         }

    }
/*************************************also    Below one is another solution from net ***************************************************/
/*#include<stdio.h>

int fibonacci(int);
int main(){ 
	int n, i; 
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
	for(i=0;i<n;i++) { 
		printf("%d ",fibonacci(i));
	}
	return 0;
}
 
int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} */