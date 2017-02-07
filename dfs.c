#include <stdio.h>
#include <time.h>

int s[10];
void dfs(int a[10][10],int n, int u)
{
 
 int v;
 s[u]=1;
 for(v=0;v<n;v++)
 { 
  if(a[u][v]==1 && s[v]==0)
  {
   dfs(a,n,v);
 }
}
}

int main()
{
 int n,a[10][10],j,i,f;
  
 printf("Enter the number of nodes\n");
 scanf("%d",&n);

 printf("Enter the path\n");
 for(i=0;i<n;i++)
{
 for(j=0;j<n;j++) 
 scanf("%d",&a[i][j]);
}

 dfs(a,n,0);

 f=0;

 for(i=0;i<n;i++)
 {
  if(s[i]==0)
  {f=1;
   break;}
}

 if(f!=1)
 printf("connected graph\n");

 else
 printf("Disconnected graph\n");

 return 0;
}
