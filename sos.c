nction which will access one input parameter and returns the parameter of circle declare pi is constant//
#include<stdio.h>
float sos(int r)
{
    const float pi = 3.14;
    float sos=2*pi*r;
    return sos;
}
void main()
{
    int r;
    printf("%f",sos(r));
    
}