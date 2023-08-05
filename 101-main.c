#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * _func - Simply prints a number followed by a new line
 *
 * @n: Number to print
 */
void _func(int n)
{
	printf("n=%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	binary_tree_print(root);

	binary_tree_levelorder(root, &_func);

	binary_tree_delete(root);
	return (0);
}