#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_levelorder - goes through a binary tree using
 *							level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i;

	if (!tree || !func)
		return;

	h = binary_tree_height(tree);

	for (i = 0; i <= h; i++)
	{
		current_level(tree, func, i);
	}
}
/**
 * current_level - run the function given on the current lvl
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * @l: the level of the tree
 */
void current_level(const binary_tree_t *tree, void (*func)(int), int l)
{
	if (!tree)
		return;
	if (l == 0)
	{
		func(tree->n);
		return;
	}
	current_level(tree->left, func, l - 1);
	current_level(tree->right, func, l - 1);
}
