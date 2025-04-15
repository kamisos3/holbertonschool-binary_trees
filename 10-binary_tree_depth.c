#include "binary_trees.h"

/**
 * binary_tree_depth - Gives measure of the nodes depth
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}

	return (depth);
}
