#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("\nEnter the number");
scanf("%d",&n);
if(n==0)
{
printf("Given number is zero");
}
elseif(n>0)
{
printf("Positive number");
}
else
{
printf("Negative number");
}
}
