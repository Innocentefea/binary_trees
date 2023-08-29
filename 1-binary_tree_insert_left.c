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

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode || !parent)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;

	return (newNode);
}