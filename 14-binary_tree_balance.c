#include "binary_trees.h"

/**
 * binary_tree_balance - balance factor of binary tree
 * @tree: binary tree
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int b_factor;
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	b_factor = left_h - right_h;
	return (b_factor);
}

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
	if (left >= right)
	{
		if (tree->left)
			return (left + 1);
		else
			return (1);
	}
	if (tree->right)
		right += 1;
	else
		right = 1;
	return (right);
}
