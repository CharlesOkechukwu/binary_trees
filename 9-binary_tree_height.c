#include "binary_trees.h"

/**
 * binary_tree_height - calcualte height of binary tree
 * @tree: the binary tree
 *
 * Return: int
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
	{
		if (tree->left)
			return (left + 1);
	}
	if (tree->right)
		right += 1;
	return (right);
}
