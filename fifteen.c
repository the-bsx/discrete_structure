// 15. WAP to represent a relation using a directed graph.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int adj[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = 0;

    int edges;
    printf("Enter number of edges in the relation: ");
    scanf("%d", &edges);

    printf("Enter edges (a b) meaning a -> b, using 1-indexed vertices:\n");
    for (int k = 0; k < edges; k++) {
        int a, b;
        scanf("%d %d", &a, &b);
        adj[a-1][b-1] = 1;
    }

    printf("\nDirected graph representation (edges):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adj[i][j])
                printf("Vertex %d --> Vertex %d\n", i+1, j+1);
        }
    }

    printf("\nAdjacency (zero-one) matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", adj[i][j]);
        printf("\n");
    }

    return 0;
}