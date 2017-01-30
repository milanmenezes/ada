#include <stdio.h>
#include <time.h>

void floyd(int a[100][100],int n)
{
 int i,j,k;
 for(k=1;k<=n;k++)
{
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
 a[i][j]=a[i][j] || (a[i][k] && a[k][j]);
 }
}
}
}

int main()
{
 int a[100][100];
 int n,i,j,t=1;
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
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{
 if(a[i][j]==0)
 {
  t=0;
 }
}
}
if(t==1)
printf("It is a connected graph\n");
else 
printf("It is a disconnected graph\n");
printf("The time complexity is: %ld\n",(stop-start)/CLOCKS_PER_SEC);
return 0;
}
