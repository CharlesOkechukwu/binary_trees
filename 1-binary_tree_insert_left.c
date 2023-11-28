#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at binary tree left branch
 * @parent: parent of the binary tree
 * @value: value of node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left)
	{
		temp = parent->left;
		temp->parent = new;
		new->left = temp;
	}
	parent->left = new;
	return (new);
}
