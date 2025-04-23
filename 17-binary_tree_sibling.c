#include "binary_trees.h"
/**
* binary_tree_sibling - Finds sibling of a node
* @node: Pointer to node that could have sibling
*
*
* Return: Pointer to sibling node; NULL if theres no sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
