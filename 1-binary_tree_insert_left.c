#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_insert_left - inserts a node as the left-child of another node
  * @parent: pointer to the node to insert the left-child in
  * @value: the value to store in the new node.
  * Return: pointer to the created node, or NULL on failure or parent is NULL
  * if parent has left-child, replace it with the new left-child
  * then must set the old left-child as the left-child of the new node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	/* Create a new Node */
	newNode = binary_tree_node(parent, value);

	/* if the parent already has a left child, move it to the left child */
	/* move it to the left child of the new node */
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left = newNode;
		newNode->left->parent = newNode;
	}

	/* set the new node as the left-child of the parent */
	parent->left = newNode;

	return (newNode);
}
