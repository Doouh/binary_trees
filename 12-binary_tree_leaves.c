#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: tree to count it leaves
 *
 * Return: leaves of the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (tree->left)
		size += binary_tree_leaves(tree->left);
	if (tree->right)
		size += binary_tree_leaves(tree->right);
	if (!tree->right && !tree->left)
		return (size + 1);
	return (size);
}
