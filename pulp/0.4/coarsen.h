#ifndef _COARSEN_H_
#define _COARSEN_H_

#include "graph.h"

int get_contracted_edges_greedy(graph* g, 
  int*& contracted_edges, int& num_contracted_edges);

int get_contracted_edges_hem(graph* g, 
  int*& contracted_edges, int& num_contracted_edges);

int get_contracted_edges_hec(graph* g, 
  int*& contracted_edges, int& num_contracted_edges);

int get_coarse_edges(graph* g,
  int* contracted_edges, int num_contracted_edges,
  int& num_verts_new, int& num_edges_new,
  int*& srcs_new, int*& dsts_new, int*& vert_weights_new, int*& sd_weights_new);

graph* create_coarse_graph(int num_verts_new, int num_edges_new,
  int*& srcs_new, int*& dsts_new, int* vert_weights_new, int* sd_weights_new);

int extrapolate_parts(graph* g_coarse, graph* g, 
  int* parts_coarse, int* parts);

#endif