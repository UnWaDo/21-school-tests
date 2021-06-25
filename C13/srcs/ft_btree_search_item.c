#include "ft_btree_test.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	void	*ret;

	ret = 0;
	if (!root)
		return (ret);
	if (root->left)
		ret = btree_search_item(root->left, data_ref, cmpf);
	if (!ret && !(*cmpf)(root->item, data_ref))
		ret = root->item;
	if (!ret && root->right)
		ret = btree_search_item(root->right, data_ref, cmpf);
	return (ret);
}
