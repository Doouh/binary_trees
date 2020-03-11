#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: s a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node or NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);
	else if (!node->parent->left || !node->parent->right)
		return (NULL);
	else if (node->parent->left == node)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;
	return (sibling);
}
