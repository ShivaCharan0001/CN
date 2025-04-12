#include <stdio.h>

int a[10][10], n;

// Function to display adjacent nodes of a given node
void adj(int k) {
    int i, j;
    
    // Printing the adjacent nodes of the given root node
    printf("Adjacent nodes of node %d:\n", k);
    for (j = 1; j <= n; j++) {
        if (a[k][j] == 1 || a[j][k] == 1) {
            printf("%d\t", j);
        }
    }
    printf("\n");

    // Printing nodes that are not connected to the given node
    printf("Non-adjacent nodes to node %d:\n", k);
    for (i = 1; i <= n; i++) {
        if (i != k && a[k][i] == 0 && a[i][k] == 0) {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main() {
    int i, j, root;

    // Taking the number of nodes as input
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Taking the adjacency matrix as input
    printf("Enter adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("Enter connection for %d --> %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Taking the root node as input
    printf("Enter the root node: ");
    scanf("%d", &root);

    // Calling the adj function to print adjacent and non-adjacent nodes
    adj(root);

    return 0;
}
