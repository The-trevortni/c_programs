#include<stdio.h>
int main()
{
	int seat;
    printf("ENTER THE SEAT NO.");
    scanf("%d", &seat);

if (seat<=72)
    {
    int r=seat%8;

    if (1<=seat&&seat<=8)
        {
            printf("CABIN NO 1\n");
        }
else if(9<=seat&&seat<=16)
        {
            printf("CABIN NO 2\n");
        }
else if (17<=seat&&seat<=24)
        {
            printf("CABIN NO 3\n");
        }
else if (25<=seat&&seat<=32)
        {
            printf("CABIN NO 4\n");
        }
else if (33<=seat&&seat<=40)
        {
            printf("CABIN NO 5\n");
        }
else if (41<=seat&&seat<=48)
        {
            printf("CABIN NO 6\n");
        }
else if (49<=seat&&seat<=56)
        {
            printf("CABIN NO 7\n");
        }
else if (57<=seat&&seat<=64)
        {
            printf("CABIN NO 8\n");
        }
else if (65<=seat&&seat<=72)
        {
            printf("CABIN NO 9 \n");
        }

 switch (r)

    {
        case 0:
            printf("%d is side upper berth",seat);
            break;
        case 1: printf(" %d is lower berth", seat);
            break;
        case 2: printf("%d is middle berth", seat);
            break;
        case 3: printf("%d is upper berth", seat);
            break;
        case 4:
            printf(" %d is lower berth",seat);
            break;
        case 5: printf("%d is middle berth",seat);
            break;
        case 6:
            printf("%d is upper berth",seat);
            break;
        case 7:
            printf("%d is side lower berth",seat);
            break;

        default:
            printf("Please enter valid seat number ");
            break;
    }
}

else
{

printf("Please enter valid seat number less than eaqual to 72");

}
	return 0;
}











/*#include<stdio.h>
#include<stdlib.h>
int  main()
{
int sum,i;

for( i=1;i<=10;i++);
{
  //  sum=sum+i;
    if(sum==4)
{

 continue;

}

  }
  printf("sum is =%d",sum);

//return 0;
}

*/

/*#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int sum,i;
    for(i = 1; i<11; i++)
    {
        sum=sum+i;
        if(sum == 4)
        printf("successful");
        break;
    }


} */


/*#include<stdio.h>
int main()
{
int sum,i;

for( i=1;i<=10;i++);
{
    //sum=sum+i;
    if(sum==4)
    {

    }
    printf("executed break successfully");
     //break;



  }

return 0;
}*/
