#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: tree to delete
 *
 * Return: nothing
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sl, sr;

	if (tree && tree->left)
		sl = binary_tree_height(tree->left) + 1;
	else
		sl = 0;
	if (tree && tree->right)
		sr = binary_tree_height(tree->right) + 1;
	else
		sr = 0;
	if (sr >= sl)
		return (sr);
	else
		return (sl);
}
