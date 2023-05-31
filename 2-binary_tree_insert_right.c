#include "binary_trees.h"
/**
 * binary_tree_insert_right -  function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newchild = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		newchild->right = parent->right;
		newchild->right->parent = newchild;
	}

	parent->right = newchild;

	return (newchild);
}
