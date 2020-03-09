#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of
 * another node.
 * @parent: binary tree to add a child
 * @value: value to save
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (!parent || !value)
		return (NULL);
	new_tree = malloc(sizeof(binary_tree_t));
	if (!new_tree)
		return (NULL);
	new_tree->n = value;
	new_tree->right = NULL;
	new_tree->left = NULL;
	if (parent->left)
	{
		new_tree->left = parent->left;
		new_tree->left->parent = new_tree;
	}
	new_tree->parent = parent;
	parent->left = new_tree;
	return (new_tree);
}
