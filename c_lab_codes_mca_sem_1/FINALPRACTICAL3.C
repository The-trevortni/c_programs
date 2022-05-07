#include <stdio.h>
int function(int,int,int);

int main()
{
  int day,month,year;
    printf("Enter the day");
    scanf("%d",&day);
    printf("Enter the month");
    scanf("%d",&month);
    printf("Enter the year");
    scanf("%d",&year);

    printf("\n");
    int res=function(day,month,year);

    printf("The entered date is %d th day  ",res);

return 0;
}

int function(int day,int month,int year)
{ 
    int c;
    if(month==1)
            c=day;
    
    else if(month==2)
            c=day+31;
            
     if(year%4==0||year%400==0)
        {   
            

            if(month==3)
             c=day+60;
            else if(month==4)
            c=day+91;
            else if(month==5)
            c=day+121;
            else if(month==6)
            c=day+152;
            else if(month==7)
            c=day+182;
            else if(month==8)
            c=day+213;
            else if(month==9)
            c=day+244;
            else if(month==10)
            c=day+274;
            else if(month==11)
            c=day+305;
            else if(month==12)
            c=day+335;
            
        }
        
    else
        {
            if(month==3)
            c=day+59;
            else if(month==4)
            c=day+90;
            else if(month==5)
            c=day+120;
            else if(month==6)
            c=day+151;
            else if(month==7)
            c=day+181;
            else if(month==8)
            c=day+212;
            else if(month==9)
            c=day+243;
            else if(month==10)
            c=day+273;
            else if(month==11)
            c=day+304;
            else if(month==12)
            c=day+334;
            
        }
        
        
    return c;
        
}
    
        



