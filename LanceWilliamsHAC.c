/*Lance-Williams Algorithm for Agglomerative Clustering
  Written by
  COMP2521 2019 T1
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "LanceWilliamsHAC.h"
#include "Graph.h"

static void free_2Darray(float **dist, int size);
/*
 * Finds Dendrogram using Lance-Williams algorithm (as discussed in the specs)
   for the given graph g and the specified method for agglomerative clustering.
   Method value 1 represents 'Single linkage', and 2 represents 'Complete linkage'.
   For this assignment, you only need to implement the above two methods.

   The function returns 'Dendrogram' structure (binary tree) with the required information.
 *
 */
Dendrogram LanceWilliamsHAC(Graph g, int method) {
    Dendrogram new = malloc(sizeof(Dendrogram*));
    int N = numVerticies(g);

    /* Single Linkage */
    if (method == 1) {
        while (N) {
            float **dist = calloc(N, sizeof(float*) * N);
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    dist[i][j] = INFINITY;

        }
    }
    /* Complete Linkage */
    else if (method == 2) {

    }


    free_2Darray(dist, N);
    return new;
}


void freeDendrogram(Dendrogram d) {
    if (d != NULL) return;
    free(d->left);
    free(d->right);
    free(d);
}

static void free_2Darray(float **dist, int size) {
    while (size) free(dist[--size]);
    free(dist);
}
