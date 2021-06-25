#include "ft_btree_test.h"
#include <stdlib.h>

void		btree_remove_tree(t_btree *root)
{
	if (!root)
		return ;
	if (root->left)
		btree_remove_tree(root->left);
	if (root->right)
		btree_remove_tree(root->right);
	free(root);
}
