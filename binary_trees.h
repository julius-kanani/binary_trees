#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_
#include <stdlib.h>
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

/* function prototypes */
/* A function prototype that creates a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* function prototype for the binary_tree_print function. */
void binary_tree_print(const binary_tree_t *);

/* function prototype that inserts a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* function prototype that inserts a node as the right child of another node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* function that deletes an entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* function that checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* function that checks if a given node is a root */
int binary_tree_is_root(const binary_tree_t *node);

/* function that goes through a binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int));

/* function that goes through a binary tree using in-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* function that goes through a binary tree using post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* function prototype that measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* function that measures the depth of the node in a binary tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* function prototype that measures the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

#endif /* _BINARY_TREES_H_ */
