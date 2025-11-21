//structer for name of book.author
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
    char name[20];
    char author[20];
    int year;
};

void main()
{
    int n ,i;
    printf("enter number of book");
    scanf("%d",&n);
    struct book b[n];
    for(int i = 0; i<n; i++)

    printf("Enter the name of book: ");
    scanf("%s",b[i].name);

        printf("Enter author of book:");
        scanf("%s", b[i].author);


        printf("enter year of publication:");
        scanf("%d",&b[i].year);
    
    }
