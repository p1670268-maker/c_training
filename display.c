


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct car
{
    char name[20];
    int maxspeed;
    int price;
    
};
int main()

    {
        struct car c[3];
        int i;
        for(i=0;i<3; i++)
        {
        printf("enter the name of the car\n");
        scanf("%s",c[i].name);
        printf("enter the max speed of the car\n");
        scanf("%d",&c[i].maxspeed);
        printf("enter the price of the car\n");
        scanf("%d",&c[i].price);
    }

}
