#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!binary_tree_is_full(tree) || binary_tree_balance(tree))
		return (0);
	return (1);
}
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
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l += binary_tree_height(tree->left) + 1;
	if (tree->right)
		r += binary_tree_height(tree->right) + 1;
	return (l - r);
}
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
