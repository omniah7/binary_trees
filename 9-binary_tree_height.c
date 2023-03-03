#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of a binary tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;
	size_t l_size = 0, r_size = 0;

	if (!tree)
		return (0);

	l = tree->left;
	r = tree->right;

	if (l)
		l_size += 1 + binary_tree_height(l);
	if (r)
		r_size += 1 + binary_tree_height(r);

	return ((r_size > l_size) ? r_size : l_size);
}
