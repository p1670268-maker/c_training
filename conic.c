//write sa function which will multiply 3 nos and conic by 3nos
#include<stdio.h>
void pro (int *a, int*b , int*c)
{
    int product = (*a) * (*b) * (*c);
    printf("%d", product);
}
void main()
{
    int a=2;
    int b=4;
    int c=6;
    pro(&a,&b,&c);

}

