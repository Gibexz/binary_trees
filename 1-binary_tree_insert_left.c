#include "binary_trees.h"
/**
 *
 *
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return NULL;

	binary_tree_t *newchild = malloc(sizeof(binary_tree_t));
	if (newchild == NULL)
		return NULL

	newchild->n = value;
	newchild->parent = parent;
	newchild->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newchild;
		newchild->left = NULL;
	}
	else
	{
		newchild->left = parent->left;
		parent->left = newchild;
	}
	return newchild;
}
