#include <iostream>
#include <stdio.h>
#include <limits.h>
using namespace std;
const int V = 9; //定义顶点个数

//从未包含在SPT的集合T中，选取一个到S集合的最短距离的顶点。
int getMinIndex(int dist[V], bool sptSet[V]) {
	   int min = INT_MAX, min_index;
	   for (int v = 0; v < V; v++)
	     if (sptSet[v] == false && dist[v] < min)
	         min = dist[v], min_index = v;
	   return min_index;
}

// 打印结果
void printSolution(int dist[], int n) {
	printf("Vertex   Distance from Source\n");
	for (int i = 0; i < V; i++)
		printf("%d \t\t %d\n", i, dist[i]);
}

//source 代表源点
void dijkstra(int graph[V][V], int source) {
	int dist[V];     // 存储结果，从源点到 i的距离

	bool sptSet[V]; // sptSet[i]=true 如果顶点i包含在SPT中

	// 初始化. 0代表不可达
	for (int i = 0; i < V; i++){
		dist[i] = (graph[source][i] == 0 ? INT_MAX:graph[source][i]);
		sptSet[i] = false;
	}

	// 源点，距离总是为0. 并加入SPT
	dist[source] = 0;
	sptSet[source] = true;

	// 迭代V-1次，因此不用计算源点了，还剩下V-1个需要计算的顶点。
	for (int count = 0; count < V - 1; count++) {
		// u，是T集合中，到S集合距离最小的点
		int u = getMinIndex(dist, sptSet);

		// 加入SPT中
		sptSet[u] = true;

		//更新到V的距离。可以理解为Bellman-Ford中的松弛操作
		for (int v = 0; v < V; v++)
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
					&& dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}

	printSolution(dist, V);
}

int main() {
	/* 以例子中的图为例 */
	int graph[V][V] =
			{ { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, {
					0, 8, 0, 7, 0, 4, 0, 0, 2 }, { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
					{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
					{ 0, 0, 4, 0, 10, 0, 2, 0, 0 },
					{ 0, 0, 0, 14, 0, 2, 0, 1, 6 },
					{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
					{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

	dijkstra(graph, 0);

	return 0;
}
