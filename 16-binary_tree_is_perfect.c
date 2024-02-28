#include "binary_trees.h"

/**
  * binary_tree_is_perfect - Checks if a binary tree is perfect
  * @tree: Pointer to the root node of the tree to check
  * Return: 1 if the tree is perfect, 0 otherwise
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height_left, height_right;

if (tree == NULL)
	return (0);

height_left = binary_tree_height(tree->left);
height_right = binary_tree_height(tree->right);

if (height_left == height_right)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (
			binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)
			);
}

return (0);
}
