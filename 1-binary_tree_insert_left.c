#include "binary_trees.h"
/**
 * binary_tree_insert_left -  function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newchild;

	if (parent == NULL)
		return (NULL);

	newchild = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		newchild->left = parent->left;
		newchild->left->parent = newchild;
	}

	parent->left = newchild;

	return (newchild);
}
