#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_is_root - checks if a node is a root
  * @node: pointer to the node to check
  * Return: 1 if node is a node, otherwise 0
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);

		binary_tree_is_root(node->left);
		binary_tree_is_root(node->right);
	}

	return (0);
}
