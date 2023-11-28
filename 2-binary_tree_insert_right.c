#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at binary tree right branch
 * @parent: parent of the binary tree
 * @value: value of node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right)
	{
		temp = parent->right;
		temp->parent = new;
		new->right = temp;
	}
	parent->right = new;
	return (new);
}
