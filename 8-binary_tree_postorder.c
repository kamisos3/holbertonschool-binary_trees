#include "binary_trees.h"
/**
* binary_tree_postorder - goes through binary tree post-order traversal
* @tree: pointer to root node of tree
* @func: pointer to func that calls nodes
*
*
*
* Rerurn: NULL if tree or func fails
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
