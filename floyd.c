#include <stdio.h>
#include <time.h>

int min(int a, int b)
{
if(a<b)
 return a;

return b;
}

void floyd(int a[100][100],int n)
{
 int i,j,k;
 for(k=1;k<=n;k++)
{
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
 a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
 }
}
}
}

int main()
{
 int a[100][100];
 int n,i,j;
 clock_t start, stop;
 printf("Enter the number of Nodes\n");
 scanf("%d",&n);
 printf("Enter the Path\n");
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{
 scanf("%d",&a[i][j]);
 }
}
 start= clock();
 floyd(a,n);
 stop= clock();
 printf("The shortest path is:\n");
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{
 printf("%d ",a[i][j]);
}
printf("\n");
}
printf("The time complexity is: %ld\n",(stop-start)/CLOCKS_PER_SEC);
return 0;
}
