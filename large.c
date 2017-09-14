#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 numbers");
scanf("%d",a);
scanf("%d",b);
scanf("%d",c);
if((a>c)&&(a>b))
{
printf("\n A is big");
}
elseif((b>a)&&(b>c))
{
printf("\n B is big");
}
else
{
printf("\n C is big");
}
}
