#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree && tree->left)
		size = 1 + binary_tree_size(tree->left);
	if (tree && tree->right)
		size = 1 + binary_tree_size(tree->right);
	return (size);
}