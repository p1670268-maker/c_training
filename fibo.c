
#include<stdio.h>
void main()
{
    int sum;
    int result = 0;

    int a[5] = {0,1,1,2,3};
int b[5] = {1,1,2,3,5};
for (int i=0;i<5;i++)
{
    sum = a[i]+b[i];
    result = result + sum;
    printf("%d\n",sum);


}
}