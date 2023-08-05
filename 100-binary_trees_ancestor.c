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
	size_t f, s;

	if (!first || !second)
		return (NULL);
	/* if both are the same node */
	if (first == second)
		return ((binary_tree_t *)first);
	/* if both are siblings, return the parent */
	if (first->parent == second->parent)
		return (first->parent);
	/* if one of them is a parent to the other, return it */
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);

	f = binary_tree_depth(first);
	s = binary_tree_depth(second);
	if (f > s)
	{
		return (binary_trees_ancestor(first->parent, second));
	}
	else if (f < s)
	{
		return (binary_trees_ancestor(first, second->parent));
	}
	else
	{
		return (binary_trees_ancestor(first->parent, second->parent));
	}
}
