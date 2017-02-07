#include <stdio.h>
#include <time.h>

int a[20][20],q[20],s[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
 for(i=0;i<n;i++)
  if(a[v][i] && !s[i])
   q[++r]=i;

 if(f<=r)
 {
  s[q[f]]=1;
  bfs(q[f++]);
 }
}

int main()
{
 int t=0;
  
 printf("Enter the number of nodes\n");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  q[i]=0;
  s[i]=0;
 }
 
 printf("Enter the path\n");
 for(i=0;i<n;i++)
{
 for(j=0;j<n;j++) 
 scanf("%d",&a[i][j]);
}

 bfs(0);


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
