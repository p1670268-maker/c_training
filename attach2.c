#include<stdio.h>
void names (char first[],char last[] int sw)
{
    int i = 0;
    char full[100];
    while (first[i]!='\0')
    {
        full[i] = first[i];
        i++;
    }
    full[i] = ' ';
    i++;
    int j = 0;
    while (last[j]!='\0')
    {
        full[i] = last[j];
        i++;
        j++;

    }
        printf("%s",full);
}
void main()
{
    int len = i+1;
    if (len<sw)
    printf("Fits in the screen");
    else
    printf("Doesn't fit in the screen");
    char first[20],last[20];
    printf("Enter your first name: ");
    scanf("%f",first);
    printf("Enter your last name: ");
    scanf("%f",last);
    names(first,last ,sw);
    //printf("%s",full);
    }














