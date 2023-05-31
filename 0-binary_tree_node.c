#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to parant node
 * @value: value of n in the newly created node (i.e. new_child)
 *
 * Return: new_child (pointer to the new node)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child = malloc(sizeof(binary_tree_t));
	
	new_child->parent = parent;
	new_child->n = value;
	new_child->left = NULL;
	new_child->right = NULL;

	return new_child;
}
