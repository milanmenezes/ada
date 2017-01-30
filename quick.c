#include <stdio.h>
#include <time.h>

int partition(int a[],int l,int h)
{
 int i=l+1,t,j=h,key=a[l];
 while(i<=j)
 {
  while(a[i]<=key)
   i++;

  while(a[j]>key)
  j--;

 if(i<j)
 {
  t=a[i];
  a[i]=a[j];
  a[j]=t;

 }
 }
 t=a[l];
 a[l]=a[j];
 a[j]=t;
 return j;
}


void quick(int a[],int l,int h)
{
 int m;
 if(l<h)
 {
 m=partition(a,l,h);
 quick(a,l,m-1);
 quick(a,m+1,h);
}
}

int main()
{
 int i,n,a[100];
 clock_t start,end;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the elements\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 start=clock();
 quick(a,0,n-1);
 end=clock();
 printf("The sorted array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
  printf("\nThe time complexity is: %ld\n",(end-start)/CLOCKS_PER_SEC);
  return 0;
}
