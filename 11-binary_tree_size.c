#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the node to measure the size
 * Return: the size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;
	size_t s = 1;

	if (!tree)
		return (0);
	l = tree->left;
	r = tree->right;
	s += binary_tree_size(l);
	s += binary_tree_size(r);
	return (s);
}
