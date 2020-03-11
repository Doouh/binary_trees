#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the balance
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int sl, sr;

	if (!tree)
		return (0);
	if (tree->left)
		sl = binary_tree_height(tree->left) + 1;
	else
		sl = 0;
	if (tree->right)
		sr = binary_tree_height(tree->right) + 1;
	else
		sr = 0;
	return (sl - sr);
}
