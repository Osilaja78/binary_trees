#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 *
 * @tree: pointer to the root node of the tree to be measured.
 *
 * Return: height if tree is not null else 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (left_h > right_h ? (left_h + 1) : (right_h + 1));
	return (left_h > right_h ? left_h : right_h);
}
