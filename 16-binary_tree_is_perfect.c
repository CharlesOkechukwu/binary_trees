#include "binary_trees.h"

/**
 * binary_tree_is_perfect - if tree is perfect
 * @tree: binary tree
 *
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	depth = leaf_depth(tree);
	if (tree == NULL)
		return (0);
	return (binary_rec(tree, depth, 0));
}

/**
 * leaf_depth - get depth
 * @tree: binary tree
 *
 * Return: depth
 */

size_t leaf_depth(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_depth(tree));
	return (tree->left ? leaf_depth(tree->left) : leaf_depth(tree->right));
}

/**
 * binary_tree_depth - calculate binary tree depth
 * @tree: the binary tree
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = -1;

	if (tree == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	if (tree->parent)
		depth += 1;
	return (depth);
}

/**
 * binary_rec - recursive binary function
 * @tree: binary tree
 * @depth: depth of leaf
 * @level: current level
 *
 * Return: 1 or 0
 */

int binary_rec(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
	{
		if (depth == level)
			return (1);
		else
			return (0);
	}
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (binary_rec(tree->left, depth, level + 1) &&
			binary_rec(tree->right, depth, level + 1));
}
