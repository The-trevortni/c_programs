#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    int *ptr;          
    ptr=&x; 
        int c=*ptr++;    
  // printf("the value of *ptr = %d\n",ptr);  
   //printf("the value of *ptr = %d\n",*++ptr);     //prints pointed address increased by 4
  
  //printf("the value of ++*ptr = %d\n",++*ptr);
  //  printf("the value of *ptr++ = %d\n",*ptr++);
  //  printf("the value of *ptr++ = %d\n",*ptr++);
    printf("the value of (*ptr)++ = %d\n",(*ptr)++);
    
    return 0;
}