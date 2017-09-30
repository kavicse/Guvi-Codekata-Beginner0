#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",a,b,c);
if((a>b)&&(a>c))
printf("A is big");
elseif((b>a)&&(b>c))
printf("B is big");
else
printf("C is big");
}
