#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (!tree)
		return;
	l = tree->left;
	r = tree->right;
	binary_tree_delete(l);
	binary_tree_delete(r);
	free(tree);
}
