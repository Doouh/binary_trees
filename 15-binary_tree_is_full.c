#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: tree to delete
 *
 * Return: nothing
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int height, max_nodes, size, i = 1, pow = 2;

	if (!tree)
		return (0);

	height = (int)binary_tree_height(tree);
	for ( ; i < height + 1; i++)
		pow *= 2;
	max_nodes = pow - 1;
	size = binary_tree_size(tree);
	if (size == max_nodes || height == 0)
		return (1);
	else
		return (0);
}
