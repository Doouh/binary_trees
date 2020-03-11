#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor
 *
 * Return: If tree is NULL, return 0
*/

int right(const binary_tree_t *tree)
{
        if (tree && tree->right)
                return (right(tree->right) + 1);
	return (0);
}

int left(const binary_tree_t *tree)
{
        if (tree && tree->left)
                return (left(tree->left) + 1);
	return (0);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int sl = 0, sr = 0;
	if (tree->left)
		sl = left(tree);
	if (tree->right)
		sr = right(tree);
	return (sl - sr);
}
