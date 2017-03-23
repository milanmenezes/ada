#include<stdio.h>
#include<limits.h>
# define V 5
int minKey(int key[],int Set[]){
	int min=INT_MAX,min_index,v;
	for(v=0;v<V;v++)
		if(Set[v]==0&&key[v]<min)
			min=key[v],min_index=v;
	return min_index;
}
int print(int parent[],int n,int graph[V][V]){
	int i;
	printf("weight\n");
	for(i=1;i<n;i++)
		printf("(%d,%d)=%d \n",parent[i],i,graph[i][parent[i]]);
}
void prim(int graph[V][V],int n){
	int parent[V],key[V],Set[V],i,count,v;
	for(i=0;i<V;i++)
		key[i]=INT_MAX,Set[i]=0;
	key[0]=0;
	parent[0]=-1;
	for(count=0;count<V-1;count++){
		int u=minKey(key,Set);
		Set[u]=1;
		for(v=0;v<V;v++)
			if(graph[u][v]&&Set[v]==0&&graph[u][v]<key[v])
				parent[v]=u,key[v]=graph[u][v];
	}
	print(parent,n,graph);
}
int main(){
	int graph[V][V],n,i,j;
	printf("enter the number of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%d",&graph[i][j]);
	}
	prim(graph,n);
}
