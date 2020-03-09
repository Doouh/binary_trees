#include "binary_trees.h"

/**
 * binary_tree_node - entry point
 * @parent: pointer to the parent
 * @value: value to save
 *
 * Return: binary tree
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;
	binary_tree_t *current;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return NULL;
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	new_tree->parent = NULL;
	if(parent == NULL)
		parent = new_tree;
	else
	{
		current = parent;
		parent = NULL;

		while(current)
	}
	
	return (new_tree);
}