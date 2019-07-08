#include<stdio.h>
int main(void)
{
    int n,arr[100][100],i,j;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            arr[i][j]=i*j;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",arr[i][j]);

        }

        printf("\n");
    }

    return 0;
}