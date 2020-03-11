#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, the function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
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
