#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void insertion(int a[],int n)
{
 int i,j,t;
 for(i=1;i<n;i++)
 {
  t=a[i];
  for(j=i-1;j>=0;j--)
  {
   if(a[j]>a[i])
   {
    a[j+1]=a[j];
   }
  }
 a[j]=t;
}
}

int main()
{
 int i,n,a[1000000];
 struct timeval tv1,tv2;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 a[i]=rand()%1000;

 gettimeofday(&tv1,NULL);
 insertion(a,n);
 gettimeofday(&tv2,NULL);
 printf("The sorted array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 
 printf("\nThe time complexity is: %f\n",(double)((tv2.tv_usec-tv1.tv_usec)/1000000)+(double)(tv2.tv_sec-tv1.tv_sec));
 return 0;
}
 
 
