#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: check this node to see if it a leaf
*
*
*
* Return: 1 if node ia a leaf; if it's NULL 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
