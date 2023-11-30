#include "binary_trees.h"

/**
 * binary_tree_nodes - calculate the number of parents
 * @tree: binary tree
 *
 * Return: number of parent nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		return (left + right + 1);
	return (left + right);
}
