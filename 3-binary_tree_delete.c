#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: tree to delete
 *
 * Return: nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
			binary_tree_delete(tree->left);
		if (tree->right)
			binary_tree_delete(tree->right);
		free(tree);
		tree = NULL;
	}
}
