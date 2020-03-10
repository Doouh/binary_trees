#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree using
 * in-order traversal
 * @tree: tree to print
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && tree->left)
		binary_tree_inorder(tree->left, *func);
	else if (tree && tree->right)
	{
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
	else if (tree)
	{
		func(tree->n);
		binary_tree_inorder(NULL, func);
	}
	if (tree && tree->right)
	{
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
