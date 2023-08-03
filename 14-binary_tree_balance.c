#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure balance factor
 *
 * Return: the count
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (!tree)
		return (0);

	l_height = binary_tree_balance(tree->left);
	r_height = binary_tree_balance(tree->right);

	return (l_height - r_height);
}
