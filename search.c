#include <stdio.h>
#include <time.h>

int binary(int a[],int n,int x)
{
 int m,l=0,h=n-1;
 while(h>=l)
{
 m=(h+l)/2;
 if(a[m]==x)
 {
  return m;
 }
else if(x<a[m])
 h=n-1;

else
 l=m+1;
}

return -1;
}

int linear(int a[],int n,int x)
{
 int i;
 for(i=0;i<n;i++)
  {
   if(a[i]==x)
    return i;
  }
 return -1;
}

int main()
{
 int a[100],n,i,x,pos,c;
 clock_t start,end;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the elemets\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 printf("Enter the search element\n");
 scanf("%d",&x);
 printf("Enter 1 for linear search, 2 for binary search\n");
 scanf("%d",&c);
 start=clock();
 switch(c)
 {
 case 1:
 pos=linear(a,n,x);
 break;
 case 2:
 pos=binary(a,n,x);
 break;
 default:
 printf("Invalid choice\n");

 }
 for(i=0;i<1000000000;i++)
 {
  ;
 }
 end=clock();
 if(pos>=0)
 printf("Element found at position %d\n",pos+1);
 else
 printf("Element not found\n");
 printf("Time complexity is %ld\n", (end-start)/CLOCKS_PER_SEC);
 return 0;

}
