#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree
 * to count the number of nodes
 * Return: number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (tree->left)
		size += binary_tree_nodes(tree->left);
	if (tree->right)
		size += binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		return (size + 1);
	return (size);
}
