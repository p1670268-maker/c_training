
#include<stdio.h>
void main()
{
    int arr[4][2] = { {20,25},{15,18},{30,35}};
    for (int i=0; i<4; i++)
    {
        for(int j= 0; j<2; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}