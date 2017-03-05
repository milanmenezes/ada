#include<stdio.h>

void topo(int n,int a[100][100])
{
 int r=-1,f=0;
 int k=-1;
 int t[n];
 int  visited[n];
 int indegree[n];
 int i,j;
 int queue[n];
 int v;

 for(i=0;i<n;i++)
 {
  indegree[i]=visited[i]=0;
 }

for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  {
   if(a[i][j])
    indegree[j]++;
  }
}

for(i=0;i<n;i++)
{
 if(!indegree[i])
 {
  queue[++r]=i;
  visited[i]=1;
 }
}

while(r>=f)
{
 v=queue[f];
 f++;
 t[++k]=v;

 for(j=0;j<n;j++)
 {
  if(a[v][j] && !visited[j])
   {
    indegree[j]--;

    if(!indegree[j])
    {
     queue[++r]=j;
     visited[j]=1;
    }
  }
 }
}

 if(k>n)
 printf("Topological sorting not possible \n");

else{
 for(i=0;i<n;i++)
 {
   printf("%d ",t[i]);
 }
 }
 }

void main()
{
 int i,j,n,a[100][100];
 printf("Enter the number of nodes\n");
 scanf("%d",&n);
 printf("Enter the path\n");
 //start from 0th node
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
}

topo(n,a);

} 
 
