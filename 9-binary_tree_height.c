#include "binary_trees.h"

/**
 * _binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: None
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
		return (0);

	l_height = _binary_tree_height(tree->left);
	r_height = _binary_tree_height(tree->right);

	return ((l_height > r_height ? l_height : r_height) + 1);
}
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: None
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (_binary_tree_height(tree) - 1);
}
