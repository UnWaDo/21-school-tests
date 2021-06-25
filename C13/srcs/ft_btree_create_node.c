#include "ft_btree_test.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*el;

	el = malloc(sizeof(*el));
	if (!el)
		return (0);
	el->left = 0;
	el->right = 0;
	el->item = item;
	return (el);
}
