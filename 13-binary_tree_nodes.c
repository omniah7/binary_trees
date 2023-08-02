#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: the nodes count or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;
	size_t n = 0;

	if (!tree)
		return (0);
	l = tree->left;
	r = tree->right;
	if (l || r)
		n++;
	n += binary_tree_nodes(l);
	n += binary_tree_nodes(r);
	return (n);
}
