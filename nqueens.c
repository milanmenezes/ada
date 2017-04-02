#include <stdio.h>
int a[100][100];

int check(int m,int n,int max)
{
 int i,j,f=1;
 for(i=0;i<m;i++)
{
 if(a[i][n])
 {
  f=0;
  break;
 }
}

 i=m-1;
 j=n-1;
 while(i>=0 && j>=0)
 {
  if(a[i][j])
 {
  f=0;
  break;
 }
 i--;
 j--;
 }

 i=m-1;
 j=n+1;
 
 while(i>=0 && j<max)
 {
  if(a[i][j])
  {
   f=0;
   break;
  }
  i--;
  j++;
}
 
return f;
}  


int queen(int n,int x)
{
 int i,j,f,f1=0;
 if(n+1==x)
  return 1;

 for(i=0;i<n;i++)
 {
  if(check(x-1,i,n))
  { 
   a[x-1][i]=1;
   f=queen(n,x+1);
   if(f)
   {
    return 1;
   }  
   else
    {
    a[x-1][i]=0;
  }
  }
 }
 return 0;
}

void main()
{
 int f=0,n,i,j;
 
 printf("Enter the number of queens\n");
 scanf("%d",&n);
 
 f=queen(n,1);
 
if(f){
 for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  printf("%d ",a[i][j]);

 printf("\n");
}
}
else
 printf("Queens cannot be placed\n");

}

