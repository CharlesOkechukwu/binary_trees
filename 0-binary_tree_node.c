#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: parent of binary tree
 * @value: value in the node
 *
 * Return: newly created binary tree node pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	if (parent)
		node->parent = parent;
	else
		node->parent = NULL;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
