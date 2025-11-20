+y2
#include<stdio.h>
int param(int x, int y)
{
    int value = ((x*x)+(y*y));
    return value;
}
void main()
{
int x = 30;
int y = 20;
printf("%d",param(x,y));
}