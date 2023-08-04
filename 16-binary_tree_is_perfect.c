#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"
#include "12-binary_tree_leaves.c"
#include "4-binary_tree_is_leaf.c"
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
	if (!binary_tree_is_leaf(tree) && binary_tree_leaves(tree) % 2 != 0)
		return (0);
	return (1);
}
