#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Create new node */
binary_tree_t *NewNode(binary_tree_t *parent, int value);
avl_t *sorted_array_to_avl(int *array, size_t size);
avl_t *array_to_avl(int *array, int start, int size, avl_t *);

/* Function to print Binary Tree */
void binary_tree_print(const binary_tree_t *);

#endif /* Convert array sorted to AVL Binary tree */