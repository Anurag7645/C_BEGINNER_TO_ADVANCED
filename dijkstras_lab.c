#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int vertex;
    int weight;
    struct Node* next;
};

struct Graph {
    int num_vertices;
    struct Node** adj_lists;
};

struct Node* create_node(int vertex, int weight) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = vertex;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}

struct Graph* create_graph(int num_vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->num_vertices = num_vertices;
    graph->adj_lists = (struct Node**)malloc(num_vertices * sizeof(struct Node*));
    for (int i = 0; i < num_vertices; ++i) {
        graph->adj_lists[i] = NULL;
    }
    return graph;
}

void add_edge(struct Graph* graph, int src, int dest, int weight) {
    struct Node* newNode = create_node(dest, weight);
    newNode->next = graph->adj_lists[src];
    graph->adj_lists[src] = newNode;
}

void dijkstra(struct Graph* graph, int source) {
    int* distances = (int*)malloc(graph->num_vertices * sizeof(int));
    int* visited = (int*)malloc(graph->num_vertices * sizeof(int));
    int* previous = (int*)malloc(graph->num_vertices * sizeof(int));
    for (int i = 0; i < graph->num_vertices; ++i) {
        distances[i] = INT_MAX;
        visited[i] = 0;
        previous[i] = -1;
    }
    distances[source] = 0;

    for (int count = 0; count < graph->num_vertices - 1; ++count) {
        int min_distance = INT_MAX;
        int min_index = -1;
        for (int v = 0; v < graph->num_vertices; ++v) {
            if (!visited[v] && distances[v] < min_distance) {
                min_distance = distances[v];
                min_index = v;
            }
        }

        visited[min_index] = 1;

        struct Node* temp = graph->adj_lists[min_index];
        while (temp) {
            int neighbor = temp->vertex;
            int weight = temp->weight;
            if (!visited[neighbor] && distances[min_index] != INT_MAX && distances[min_index] + weight < distances[neighbor]) {
                distances[neighbor] = distances[min_index] + weight;
                previous[neighbor] = min_index;
            }
            temp = temp->next;
        }
    }

    printf("Vertex\tDistance\tPath\n");
    for (int i = 0; i < graph->num_vertices; ++i) {
        printf("%d\t%d\t\t", i, distances[i]);
        int current = i;
        while (current != -1) {
            printf("%d ", current);
            current = previous[current];
        }
        printf("\n");
    }

    free(distances);
    free(visited);
    free(previous);
}

int main() {
    struct Graph* graph = create_graph(4);
    add_edge(graph, 0, 1, 5);
    add_edge(graph, 0, 2, 3);
    add_edge(graph, 1, 2, 2);
    add_edge(graph, 1, 3, 1);
    add_edge(graph, 2, 3, 3);

    dijkstra(graph, 0);

    return 0;
}
