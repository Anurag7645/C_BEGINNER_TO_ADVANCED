#include <stdio.h>
#include <stdlib.h>

#define MAX_EDGES 20
#define MAX_VERTICES 20

struct Edge {
    int src, dest, weight;
};

int parent[MAX_VERTICES]; // Parent array for union-find

// Function prototypes
int find(int i);
void Union(int x, int y);
void kruskalMST();

// Global variables for the graph
int numVertices, numEdges;
struct Edge edges[MAX_EDGES];

int main() {
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &numEdges);

    printf("Enter the edges in the format (source destination weight):\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }

    kruskalMST();

    return 0;
}

int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void Union(int x, int y) {
    int xset = find(x);
    int yset = find(y);
    parent[xset] = yset;
}

int compare(const void* a, const void* b) {
    struct Edge* edge1 = (struct Edge*)a;
    struct Edge* edge2 = (struct Edge*)b;
    return edge1->weight - edge2->weight;
}

void kruskalMST() {
    int minCost = 0;
    // Initialize parent array for union-find
    for (int i = 0; i < numVertices; i++)
        parent[i] = i;

    // Sort all the edges in non-decreasing order of their weight
    qsort(edges, numEdges, sizeof(edges[0]), compare);

    printf("Edges in the Minimum Spanning Tree:\n");

    for (int i = 0; i < numEdges; i++) {
        int x = find(edges[i].src);
        int y = find(edges[i].dest);

        if (x != y) {
            printf("%d - %d : %d\n", edges[i].src, edges[i].dest, edges[i].weight);
            minCost += edges[i].weight;
            Union(x, y);
        }
    }
    printf("Minimum Cost of Spanning Tree: %d\n", minCost);
}