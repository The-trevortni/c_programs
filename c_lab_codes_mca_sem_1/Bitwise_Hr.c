#include<stdio.h>


void calculate_the_maximum(int n, int k) 
{
            int res11=0,res22=0,res33=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int res1=i&j;
            int res2=i|j;
            int res3=i^j;
            
            if(res1>res11&&res1<k)
            {
                res11=res1;
            }
             if(res2>res22&&res2<k)
            {
                res22=res2;
            }
             if(res3>res33&&res3<k)
            {
                res33=res3;
            }
        }
      
  
    }
    printf("%d\n",res11);
    printf("%d\n",res22);
    printf("%d\n",res33);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}