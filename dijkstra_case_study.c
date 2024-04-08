#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define V 5

// Function to find the vertex with minimum distance value
int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// Function to print the shortest distance from source to all vertices
void printSolution(int dist[], int parent[]) {
    printf("Vertex \t Distance from Source \t Path\n");
    for (int i = 0; i < V; i++) {
        printf("%c \t %d \t\t\t ", 'A' + i, dist[i]);
        int j = i;
        while (j != -1) {
            printf("%c ", 'A' + j);
            j = parent[j];
        }
        printf("\n");
    }
}

// Function to implement Dijkstra's algorithm
void dijkstra(int graph[V][V], int src, int dest) {
    int dist[V]; // Array to store shortest distance from source
    bool sptSet[V]; // Set to keep track of visited vertices
    int parent[V]; // Array to store parent vertices for constructing path

    // Initialize dist[], sptSet[], and parent[] arrays
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false, parent[i] = -1;

    // Distance from source to itself is 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        for (int v = 0; v < V; v++)
            // Update dist[v] if not in sptSet, there is an edge from u to v, and the total weight of path from src to v through u is smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
    }

    // Print the shortest distance from source to all vertices and the shortest path from source to destination
    printSolution(dist, parent);

    printf("Shortest path from %c to %c: ", 'A' + src, 'A' + dest);
    int current = dest;
    while (current != -1 && current != src) {
        printf("%c ", 'A' + current);
        current = parent[current];
    }
    printf("%c\n", 'A' + src);
}

int main() {
    // Adjacency matrix representation of the graph
    int graph[V][V] = {{0, 3, 1, 0, 0},
                       {3, 0, 7, 5, 1},
                       {1, 7, 0, 2, 0},
                       {0, 5, 2, 0, 7},
                       {0, 1, 0, 7, 0}};

    int source = 4; // Vertex E
    int destination = 2; // Vertex C

    // Find and print the shortest path from source to destination
    dijkstra(graph, source, destination);

    return 0;
}