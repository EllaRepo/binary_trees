#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 *
 * Return: a pointer to the created node,
 *         NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *b_node;

	if (!parent)
		return (NULL);

	b_node = malloc(sizeof(binary_tree_t));
	if (!b_node)
		return (NULL);
	b_node->n      = value;
	b_node->parent = parent;
	b_node->left   = parent->left;
	b_node->right  = NULL;

	if (parent->left)
		parent->left->parent = b_node;

	parent->left   = b_node;

	return (b_node);
}
