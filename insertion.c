#include <stdio.h>
#include <time.h>

void insertion(int a[],int n)
{
 int i,j,t;
 for(i=1;i<n;i++)
 {
  t=a[i];
  for(j=i-1;j>=0 && a[j]>t;j--)
  {
    a[j+1]=a[j];
   }

 a[j+1]=t;
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
 insertion(a,n);
 end=clock();
 printf("The sorted array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 
 printf("\nThe time complexity is: %ld\n",(end-start)/CLOCKS_PER_SEC);
return 0;
}

 
 
