#include <stdio.h>
int disp[100];

void swap(int a[100][2], int i)
{
 int t;
 t=a[i][0];
 a[i][0]=a[i+1][0];
 a[i+1][0]=t;
 
 t=a[i][1];
 a[i][1]=a[i+1][1];
 a[i+1][1]=t;
 
}

void container(int a[100][2],int n,int w)
{
 int i,j,count=0;
 for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
 if(a[j][0]>a[j+1][0])
  swap(a,j);
}
}

for(i=0;i<n;i++)
{
 if(w>0)
{
 count++;
 w-=a[i][0];
}
}

for(i=0;i<count;i++)
{
 disp[a[i][1]]=1;
}

for(i=0;i<n;i++)
 printf("%d ",disp[i]);

printf("\n");
}
void main()
{
 int i,n,w,a[100][2];
 printf("Enter the number of weights\n");
 scanf("%d",&n);
 printf("Enter the weights\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i][0]);
  a[i][1]=i;
 }
 printf("Enter the max weight\n");
 scanf("%d",&w);
 container(a,n,w);
}
 

