#include <stdio.h>


int main()
{
int a,b=122;
printf("The required sequence is ");
printf("\n");

for(a=65;a<=90;a++)
{
    

    printf("('%c','%c') \n",a,b);
     if(b>=97)
     {
         b--;

     }
    

}

    return 0;
}