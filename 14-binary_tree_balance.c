#include "binary_trees.h"
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
