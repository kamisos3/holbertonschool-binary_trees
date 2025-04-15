#include "binary_trees.h"
/**
 * binary_tree_size - Returns size of a binary tree
 * @tree: pointer to root of the tree
 *
 * Return: Size of binary tree, NULL if fails
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
