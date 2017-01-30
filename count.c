#include <stdio.h>
#include <stdlib.h>
int flag=1;
void calc(int n, int a[])
{
 int count=0;
 if(n<0)
  return;
 
  if(a[n]==1)
  {
   count++;
   while(n && a[--n]==1)
    count++;

  if(count%2==0)
  {
   flag=0;
   return;
  }
  calc(n,a);
 }
 
 if(a[n]==0)
  {
   count++;
   while(n && a[--n]==0)
    count++;

  if(count%2==0)
  {
   flag=0;
   return;
  }
  calc(n,a);
 }
}

int main()
{
 int n,a[100],i;
 printf("Enter the string length\n");
 scanf("%d",&n);
 printf("Enter the string\n");
 for(i=0;i<n;i++);
 scanf("%d",&a[i]);
 
 calc(n-1,a);
 if(flag)
 printf("String is accepted\n");
 else
 printf("String is rejected\n");

 return 0;
}
 
