#include<stdio.h>
int main()
{
int r;
float area,perimeter;
printf("enter the radius:");
scanf("%d",&r);
area=3.14*r*r;
perimeter=2*3.14*r;
printf("area of circle is %f\n",area);
printf("perimeter of circleis %f",perimeter);
return 0;
}
