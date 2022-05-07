#include<stdio.h>

int n;
int add(int a[n]);
float avg(int p[n]);

int main()
{

  printf("How many values you want to enter into an array");
  scanf("%d",&n);
  printf("Enter the values");

int res1;
float res2;

  int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);

}

res1=add(arr);
res2=avg(arr);



printf("The sum is =%d\n",res1);
printf("The average is =%.2f",res2);

return 0;
}

int add(int p[n])
{
    int add=0;
    for(int j=0;j<n;j++)
    {
      add=add+p[j];
    }
    return add;
}
float avg(int p[n])
{
    float add=0;
    for(int j=0;j<n;j++)
    {
      add=add+p[j];
    }
    return add/n;
}