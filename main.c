#include<stdio.h>
#include<conio.h>
#define N 1000
void main()
{
    int num[10000],i;
    for(i=0;i<N;i++)
    {
        if(num[N]==i)
        {
        printf("Enter the %d number :",i);
        scanf("%d",&num[N]);
        }
        else if(num[N]==50)
        printf("50 completed aim for 100.\n");
        else if(num[N]==100)
        printf("Yoo completed 100 aim for biger in you'r life.\n");
        else
        {
            printf("entered wrong number.");
            break;
        }
               
    }
}
