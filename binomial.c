#include<stdio.h>

void bin(int n, int r)
{
 int c[n+1][r+1];
 int i,j;
 
 for(i=0;i<=n;i++)
 {
  for(j=0;j<=n;j++)
   c[i][j]=0;
 }

 for(i=0;i<=n;i++)
  c[i][0]=1;

 for(i=0;i<=r;i++)
  c[i][i]=1;

 for(i=2;i<=n;i++)
  {
  for(j=1;j<=r;j++)
   c[i][j]=c[i-1][j]+c[i-1][j-1];
 }

 for(i=0;i<=n;i++)
 {
  for(j=0;j<=r;j++)
   printf("%d ",c[i][j]);
}
}

void main()
{
 int r,n;
 printf("Enter n and r\n");
 scanf("%d%d",&n,&r);
 
 bin(n,r);
 
 }
