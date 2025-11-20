#include<stdio>
void exam (int m1, int m2, int m3)
{
    int total;
    total = m1 + m2 + m3;
    printf("total marks = %d\n", total);
    printf("percentage = %d\n", total/3);
}
int main()
{
    int m1, m2, m3;
    printf("enter marks of three subjects\n");
    scanf("%d %d %d", &m1, &m2, &m3);
    exam(m1, m2, m3);
    return 0;


}