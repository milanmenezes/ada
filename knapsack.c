#include <stdio.h>

int max(int a,int b)
{
 return (a>b?a:b);
}

int knapsack(int n, int wt, int w[100],int v[100])
{
 
 if(n==0 || w==0)
 {
  return 0;
 }
 
 if(w[n-1]>wt)
  return knapsack(n-1,wt,w,v);

 else
   return max(v[n-1]+knapsack(n-1,wt-w[n-1],w,v),knapsack(n-1,wt,w,v));

}

void main()
{
 int n,i,v[100],w[100],wt, soln;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the value and weight\n");
for(i=0;i<n;i++){
 scanf("%d",&v[i]);
 scanf("%d",&w[i]);
}

 printf("Enter the max weight\n");
 scanf("%d",&wt);
 soln = knapsack(n,wt,w,v);
 printf("The value is %d\n",soln);
}

