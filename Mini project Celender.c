#include<stdio.h>
int getthefristYear(int year){
int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
return day;

}

int main()
{



    char*Month[]={ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    int DayInMonth[]={31,28,31,30,31,31,30,31,30,31,30,31};
    int i,j,TotalDay,week=0,spaceCount=0,year;
    printf("Enter The Year:\n");
    scanf("%d",&year);
    printf("\n\n********************Happy New Year-%d********************\n",year);
    if(year%4==0 && year%100!=0 && year%400==0)
    {
        DayInMonth[1]=29;
    }
    week=getthefristYear(year);
    for(i=0;i<12;i++)
    {
        printf("\n\n\n----------------- %s -----------------\n",Month[i]);
        printf("\n   SUN   MON   TUE   WED   TRU   FRI   SAT\n\n");
        for(spaceCount=1;spaceCount<=week;spaceCount++)
        {
            printf("      ");
        }
        TotalDay=DayInMonth[i];
       for(j=1;j<=TotalDay;j++)
        {
            printf("%6d", j);
            week++;

        if(week > 6 )
        {
            week = 0;
            printf("\n");
        }
       }
    }

    printf("\n\n               DEDICATE BY MD HABIBUR RAHMAN           \n");
    printf("                      Powered BY M.RIFAT                     \n");

    return 0;
}
