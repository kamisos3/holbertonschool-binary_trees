#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if tree is full
 * @tree: pointer to root node of the tree to check
 *
 * Return: If tree is NULL 0, else info on the trees space
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
