#include "binary_trees.h"
/**
* binary_tree_height - Measures height of binary tree
* @tree: pointer to root node of tree
*
*
* Return: 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right = 1 + binary_tree_height(tree->right);
	}
	else
	right = 0;

	if (left > right)
	{
		return (left);
	}

	else
{
		return (right);
	}
}
