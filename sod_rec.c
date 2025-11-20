#include<stdio.h>

int sum_digits_recur (int n)
{
    if (n==0)
    return 0;
    int d =n%10;
    return d+sum_digits_recur(n/10);
}

int main()
{
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits: %d",sum_digits_recur(n));
    return 0;
}