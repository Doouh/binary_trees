#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts
 * a node as the right-child of another node
 * @parent: pointer to the parent
 * @value: value to save
 *
 * Return: binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (!parent || !value)
		return (NULL);
	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	if (parent->right)
	{
		new_tree->right = parent->right;
		parent->right->parent = new_tree;
	}
	parent->right = new_tree;
	new_tree->parent = parent;
	return (new_tree);
}
