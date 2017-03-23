#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
#define V 9
int minDist(int dist[],bool sptSet[]){
        int min=INT_MAX,min_index,v;
        for(v=0;v<V;v++){
                if(sptSet[v]==false&& dist[v]<=min){
                        min=dist[v],min_index=v;
                }
        }
        return min_index;
}
int print(int dist[],int n){
        int i;
        printf("distance from source is\n");
        for(i=0;i<n;i++){
                printf("%d   %d \n",i+1,dist[i]);
        }
}
void dijkstra(int graph[V][V],int src,int n){
        int dist[V],i,count,u,v;
	bool sptSet[V];
        for(i=0;i<V;i++){
                dist[i]=INT_MAX,sptSet[i]=false;
        }
        dist[src]=0;
        for(count=0;count<V;count++){
                 u=minDist(dist,sptSet);
        }
        sptSet[u]=true;
        for(v=0;v<V;v++){
		if(!sptSet[v]&&graph[u][v]&&dist[u]!=INT_MAX&& dist[u]+graph[u][v]<dist[v]){
			dist[v]=dist[u]+graph[u][v];
		}
	}
	print(dist,n);
}
int main(){
	int n,i,j,graph[V][V];
	printf("enter the number of vertices");
	scanf("%d",&n);
	printf("enter the graph in matrix");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%d",&graph[i][j]);
	}
	dijkstra(graph,0,n);
}

