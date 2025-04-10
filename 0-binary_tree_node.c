#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_node - creates a binary tree node
* @value: integer thats n
* @parent: Pointer to parent node
*
* Return: Pointer to new node; NULL if fails
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	/*Creates new binary tree node*/
	if (new_node == NULL)/*Checks if allocation failed*/
	{
		return (NULL);/*Return null is fails*/
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node); /*Returns pointer to new node*/
}
