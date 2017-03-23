#include<stdio.h>
int max(int a,int b){
	return (a>b)?a:b;
}
int knapsack(int w,int wt[],int val[],int n)
{
	if(n==0||w==0)
		return 0;
	if(wt[n-1]>w)
		return knapsack(w,wt,val,n-1);
	else return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
}
int main(){
	int val[100],wt[100],i,w,n;
	printf("enter the number values");
	scanf("%d",&n);
	printf("enter the values");
	for(i=0;i<n;i++){
		scanf("%d",&val[i]);
	}
	printf("enter the weights");
	for(i=0;i<n;i++){
		scanf("%d",&wt[i]);
	}
	printf("enter the max capacity");
	scanf("%d",&w);
	printf("%d",knapsack(w,wt,val,n));
}
		
