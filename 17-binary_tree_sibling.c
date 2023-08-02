#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return:  a pointer to the sibling node, NULL if node or parent is null
 *		or node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p;

	if (!node || !node->parent)
		return (NULL);
	p = node->parent;
	if (p->left == node)
		return (p->right);
	else
		return (p->left);
}
