#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int n,arr[100][100],i,j,sum1=0,sum2=0;

scanf("%d",&n);

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j)
        {
            sum1=sum1+arr[i][j];
        }
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(j==(n-(i+1)))
        {
            sum2=sum2+arr[i][j];
        }
    }
}
int diff=sum1-sum2;

if(diff<0)
{
    printf("%d",diff*(-1));
}
else 
{
    printf("%d",diff);
}



return 0;
}
