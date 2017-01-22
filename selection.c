#include <stdio.h>
#include <time.h>

void swap(int a[],int i,int m)
{
 int t;
 t=a[i];
 a[i]=a[m];
 a[m]=t;
}


void selection(int a[],int n)
{
 int m,i,j;
 for(i=0;i<n-1;i++)
 {
  m=i;
 for(j=i+1;j<n;j++)
 {
  if(a[j]<a[m])
   m=j;
 }

 if(i!=m)
 swap(a,m,i);
 }
}


int main()
{
 int a[100],n,i;
 clock_t start,end;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the elemets\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 start=clock();
 selection(a,n);
 for(i=0;i<1000000000;i++)
 {
  ;
 }
 end=clock();
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\nTime complexity is %ld\n", (end-start)/CLOCKS_PER_SEC);
 return 0;

}
