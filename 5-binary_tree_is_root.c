#include "binary_trees.h"
/**
* binary_tree_is_root - verifies if the node is a root
* @node: verify if this node is a root
*
*
*
* Return: 1 if node is root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node ==  NULL)/*Checks if node is root*/
	{
		return (0);
	}
	return ((node->parent == NULL) ? 1 : 0);
}
