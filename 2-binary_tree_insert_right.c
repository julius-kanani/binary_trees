#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts node as the right-child of another node
  * @parent: pointer to the node to insert the right-child in
  * @value: the value to store in the new node.
  * Return: pointer to the created node, or NULL on failure or parent is NULL
  * if parent has right-child, replace it with the new right-child
  * then must set the old right-child as the right-child of the new node
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);

	/* Create a new Node */
	newNode = binary_tree_node(parent, value);

	/* if the parent already has a right child, move it so tha */
	/* the old right child must be set as the right-child of the new node */
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}

	/* set the new node as the right-child of the parent */
	parent->right = newNode;

	return (newNode);
}
