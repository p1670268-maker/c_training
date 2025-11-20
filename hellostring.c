#include<stdio.h>
#include<string.h>
void main()
{
    char name[9] = "lakshmi";
    char new[100] ="hello";
    printf("%c\n", name[5]);
    printf("lenght of string is%d",strlen(name));
    strcat(new,name);
    printf("%s",new);
printf("%zs",strstr(new,"H"));
}
