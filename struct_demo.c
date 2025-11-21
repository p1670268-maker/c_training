#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age = 19;
    s1.marks = 89.6;
    strcpy(s1.name,"joey");

    struct student s2;
    s2.age = 21;
    s2.marks = 90.6;
    strcpy(s2.name,"bye");
    printf("%s %d %f\n",s1.name,s1.age,s1.marks);
    printf("%s %d %f\n",s2.name,s2.age,s2.marks);
    
}








