#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert left
 * @parent: the parent node
 * @value: the number of the new node
 *
 * Return: A pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (!newNode)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	parent->left = newNode;

	return (newNode);
}
