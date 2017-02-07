#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>

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
 int i,n,a[1000000];
 struct timeval t1,t2;

 printf("Enter the number of elements\n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 a[i]=rand()%100;

 gettimeofday(&t1,NULL);
 quick(a,0,n-1);
 gettimeofday(&t2,NULL);
 printf("The sorted array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
  printf("\nThe time complexity is: %f\n",(double)((t2.tv_usec-t1.tv_usec)/1000000)+(double)(t2.tv_sec-t1.tv_sec));
  return 0;
}
