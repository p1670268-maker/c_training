//wreite a c function which will accept an array,its size as n an returns the diff b/w first and last element//
#include<stdio.h>
int diff(int a[],int n)
{
    int first=a[0];
    int last=a[n-1];
    return last-first;
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    printf("%d",diff(a,n));
return 0;
}