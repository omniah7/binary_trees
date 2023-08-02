#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l = tree->left;
	r = tree->right;
	if ((!l && r) || (l && !r))
		return (0);
	if (!binary_tree_is_full(l) || !binary_tree_is_full(r))
		return (0);
	return (1);
}
