#include<stdio.h>
int search(int arr[7],int key,int n)
{
    for (int i =0; i<n; i++)
    {
        if (arr[i]==key)
        return 1;
        
    }
        return 0;
    }
    void main()
    {
        int arr[7] = {34,35,65,68,50,58,60};
        int n=7;
        int key;
        printf(" what are you searching?");
        scanf("%d",&key);
        printf("%d", search(arr, key,n));
    }