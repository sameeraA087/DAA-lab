#include<stdio.h>
int main()
{
int m,i;
int first=0,second=1,next;
printf("Enter number of terms :");
scanf("%d",&m);
printf("fibonacci series:\n");
for(i=0;i<m;i++)
{
if(i==0)
{
printf("%d",first);
}
else if(i==1)
{
printf("%d",second);
}
else
{
next=first+second;
printf("%d",next);
first=second;
second=next;
}
}
return 0;
}
