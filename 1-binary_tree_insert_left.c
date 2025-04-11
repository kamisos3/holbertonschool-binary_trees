#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_insert_left - Inserts node as a left child of a node
* @parent: pointer to parent node
* @value: integer to store in node
*
* Return: Pointer to new node; NULL if failure/parent fails
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)/*Verify if parent is null*/
	{
		return (NULL);
	}
	/*Create new node below*/
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);/*If allocation fails return null*/
	}
	/*Check if parent already has left-child*/
	if (parent->left != NULL)
	{ /*Set current child to new nodes left child*/
		new_node->left = parent->left;
		parent->left->parent = new_node;
	} /*Update parent of old child left*/
	parent->left = new_node;

	return (new_node);
}
