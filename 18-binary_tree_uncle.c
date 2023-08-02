#include "binary_trees.h"
/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return:  a pointer to the uncle node, NULL if node or parent is null
 *		or node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
