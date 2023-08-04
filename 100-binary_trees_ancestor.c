#include "binary_trees.h"
#include "10-binary_tree_depth.c"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 *		or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	/* if both are siblings , return the parent */
	if (first->parent == second->parent)
		return (first->parent);
	/* if one of them is a parent to the other, return it */
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);

	if (binary_tree_depth(first) > binary_tree_depth(second))
	{
		return (binary_trees_ancestor(first->parent, second));
	}
	else
	{
		return (binary_trees_ancestor(first, second->parent));
	}
}
