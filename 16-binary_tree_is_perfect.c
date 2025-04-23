#include "binary_trees.h"
/**
* binary_tree_is_perfect - verifies if a binary tree is perfect
* @tree: pointer to root node of the tree
*
*
* Return: Prints 1 if perfect, 0 if tree is NULL of imperfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, total_nodes;

	if (tree == NULL)
		return (0);

	h = binary_tree_height(tree);
	total_nodes = binary_tree_size(tree);

	return (total_nodes == (((size_t) 1 << h) - 1));
}

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

