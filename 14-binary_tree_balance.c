#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return ((l_height > r_height ? l_height : r_height) + 1);
}
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

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (l_height - r_height);
}
