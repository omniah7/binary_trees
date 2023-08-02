#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: the leaves count or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;
	size_t n = 0;

	if (!tree)
		return (0);
	l = tree->left;
	r = tree->right;
	if (!l && !r)
		return (1);
	n += binary_tree_leaves(l);
	n += binary_tree_leaves(r);
	return (n);
}
