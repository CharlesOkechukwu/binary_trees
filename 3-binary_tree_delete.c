#include "binary_trees.h"

/**
 * binary_tree_delete - delete a full binary tree
 * @tree: the binary tree to delete
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	temp = tree;
	tree = NULL;
	free(temp);
}
