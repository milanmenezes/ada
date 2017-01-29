#include <stdio.h>
#include <time.h>

void msort(int a[],int l,int h)
{
 int m;
 if(l<h)
 {
 m=(l+h)/2;
 msort(a,0,m);
 msort(a,m+1,h);
 merge(a,l,m,h);
}
}

void merge(int a[],int l,int m,int h)
{
 int i=l,k=l,j=m+1;
 int c[100];
 while(i<=m && j<=h)
 {
  if(a[i]<a[j])
   c[k++]=a[i++];

  else
   c[k++]=a[j++];
}
 
 while(i<=m)
  c[k++]=a[i++];

 while(j<=h)
  c[k++]=a[j++];

 for(i=l;i<=h;i++)
  a[i]=c[i];

}

int main()
{
 int i,a[100],n;
 clock_t start,end;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the elements\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 start=clock();
 msort(a,0,n-1);
 end=clock();
 printf("The sorted array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\n The time complexity is: %ld \n",(end-start)/CLOCKS_PER_SEC);
 return 0;
}
 
