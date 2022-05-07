#include <stdio.h>


int main()
{
  int a=10,*ptr1;
  char name={'p'},*ptr2;
  double b=1,*ptr3;
  
  ptr1=&a;
  ptr2=&name;
  ptr3=&b;

        printf("\nTHE VALUE STORED IN VARIABLES ARE \n\n");

        printf("The value stored in INTEGER VARIABLE a is = %d\n",*ptr1);
        printf("The value stored in INTEGER pointer *ptr1 VARIABLE is = %d\n",a);
        printf("The value stored in CHARACTER VARIABLE name is = %c\n",*ptr2);
        printf("The value stored in CHARACTER pointer *ptr2 VARIABLE name is = %c\n",name);
        printf("The value stored in DOUBLE  VARIABLE b is = %lf\n",*ptr3);
        printf("The value stored in DOUBLE  pointer VARIABLE *ptr3 is = %lf\n\n",b);


        printf("THE ADDRESS OF VARIABLES ARE  \n\n",a);



        printf("The address of INTEGER variable a is = %p \n",a);
        printf("The address of INTEGER pointer variable *ptr1 is = %p \n",ptr1);
        printf("The address of CHARACTER variable name is = %p \n",name);
        printf("The address of CHARACTER pointer  variable *ptr2 is = %p \n",ptr2);
        printf("The address of DOUBLE variable b is = %p \n",b);
        printf("The address of DOUBLE pointer variable *ptr3 is = %p \n\n",ptr3);



        printf("THE SIZE OF  VARIABLES ARE \n\n",a);

        printf("The size of INTEGER VARIABLE a is = %d bytes \n",sizeof(a));
        printf("The size of INTEGER pointer VARIABLE *ptr1 is = %d bytes \n",sizeof(ptr1));
        printf("The size of CHARACTER VARIABLE name is = %d bytes\n",sizeof(name));
         printf("The size of  CHARACTER pointer VARIABLE *ptr2 is = %d bytes \n",sizeof(ptr2));
        printf("The size of DOUBLE  VARIABLE b is = %d bytes\n",sizeof(b));
        printf("The size of  DOUBLE  pointer VARIABLE *ptr3 is = %d bytes \n",sizeof(ptr3));



    return 0;
}