#include "binary_trees.h"
/**
* binary_tree_delete - deletes entire binary tree
* @tree: pointer to root node of the tree to delete
*
*
*
*
* Return: NULL if tree fails or delete the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
