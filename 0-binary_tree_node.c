#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *b_node;

	b_node = malloc(sizeof(binary_tree_t));
	if (!b_node)
		return (NULL);
	b_node->n      = value;
	b_node->parent = parent;
	b_node->left   = NULL;
	b_node->right  = NULL;

	return (b_node);
}
