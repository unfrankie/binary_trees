#include "binary_trees.h"

/**
  * binary_tree_height - Measures the height of a binary tree
  * @tree: Pointer to the root node of the tree to measure the height of
  * Return: Height of the tree, 0 if tree is NULL
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (1 + (height_left > height_right ? height_left : height_right));
}
