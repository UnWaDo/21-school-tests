#include "ft_btree_test.h"

void	btree_insert_data(t_btree **root, void *data, int (*cmp)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(data);
	else if ((*cmp)((*root)->item, data) >= 0)
		btree_insert_data(&((*root)->right), data, cmp);
	else
		btree_insert_data(&((*root)->left), data, cmp);
}