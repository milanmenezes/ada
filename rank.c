#include <stdio.h>
#include <time.h>

void rank(int a[],int n,int r[])
{
 int i,j;
 for(i=0;i<n;i++)
  r[i]=0;
 
 for(i=1;i<n;i++)
 {
  for(j=0;j<i;j++)
   {
    if(a[i]>a[j])
     r[i]++;

    else
     r[j]++;
   }
}
}

void sort(int a[],int n,int r[])
{
 int i,u[n];
 for(i=0;i<n;i++)
 {
  u[r[i]]=a[i];
 }
 for(i=0;i<n;i++)
  a[i]=u[i];
}

int main()
{
 int a[100],r[100],n,i;
 clock_t start,end;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the elemets\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 start=clock();
 rank(a,n,r);
 sort(a,n,r);
 for(i=0;i<1000000000;i++)
 {
  ;
 }
 end=clock();
 printf("The sorted array is:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 printf("\nTime complexity is %ld\n", (end-start)/CLOCKS_PER_SEC);
 return 0;

}
