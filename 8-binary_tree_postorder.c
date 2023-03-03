#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree
 *							using post-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * The value in the node must be passed as a parameter to this function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *l, *r;

	if (!tree || !func)
		return;

	l = tree->left;
	r = tree->right;
	binary_tree_postorder(l, func);
	binary_tree_postorder(r, func);
	func(tree->n);
}
