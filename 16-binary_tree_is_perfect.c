#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, the function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left)
                size += binary_tree_is_perfect(tree->left);
        if (tree->right)
                size += binary_tree_is_perfec(tree->right);
        if (!tree->right && !tree->left)
               my = binary_tree_depth(tree);
        return (size);
}
