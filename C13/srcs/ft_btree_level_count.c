#include "ft_btree_test.h"

static int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	btree_level_count(t_btree *root)
{
	int	a;
	int	b;

	if (!root)
		return (0);
	a = btree_level_count(root->left);
	b = btree_level_count(root->right);
	return (max(a, b) + 1);
}
